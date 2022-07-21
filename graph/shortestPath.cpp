void BFS(vector<int> adj[], int N, int src){
  int dis[N];
  for(int i = 0; i < N; i++){
    dis[i] = INT_MAX;
  }
  queue<int> q;
  dis[src] = 0;
  q.push(src);

  while(!q.empty()){
    int node = q.front();
    q.pop();
    for(auto it : adj[node]){
      if(dis[node]+1 < dis[it]){
        dis[it] = dis[node]+1;
        q.push(it);
      }
    }
  }
  for(int i = 0; i < n; i++){
    cout<<dis[i]<<" ";
  }
}