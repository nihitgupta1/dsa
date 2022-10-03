void spanningTree(int N, vector<vector<int>> adj[])
{
    int parent[n];
    int key[n];
    bool mstSet[n];

    for(int i = 0; i < n; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    priority_queue<pair<int,int>, vector<pair<int,int>> greater<pair<int,int>>> pq;

    key[0] = 0;
    parent[0] = -1;
    pq.push({0, 0});
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        mstSet[u] = true;

        for(auto it : adj[u]){
            int v = it.first;
            int weight = it.second;
            if(mstSet[v] == false && weight < key[v]){
                parent[v] = u;
                key[v] = weight;
                pq.push({key[v], v});
            }
        }
    }

    for(int i = 1; i < n; i++)
        cout << parent[i] << " - " << i << "\n"; // printing MST
}