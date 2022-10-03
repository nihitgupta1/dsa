struct node
{
    int u;
    int v;
    int wt;
    node(int first, int second, int weight){
        u = first;
        v = second;
        wt = weight;
    }
};

vector<node> edges; //contains all the node

void bellmanFord(){
    int src = 0;
    vector<int> dist(N, 10000);
    dist[src] = 0;
    for(int i = 1; i <= N-1; i++){
        for(auto it : edges){
            if(dist[it.u] + it.wt < dist[it.v]){
                dist[it.v] = dist[it.u] + it.wt;
            }
        }
    }

    for (auto it : edges)
    {
        if (dist[it.u] + it.wt < dist[it.v]){
            cout << "Negative cycle is present";
            fl = 1;
            break;
        }
    }
}