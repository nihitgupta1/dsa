//n = no of nodes, src = source

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
vector<int> dis(n+1, INT_MAX);

dis[src] = 0;
pq.push(make_pair(0, src));

while(!pq.empty()){
  int dist = pq.top().first;
  int prev = pq.top().second;
  pq.pop();

  for(auto it : adj[prev]){
    int next = it.first;
    int nextDis = it.second;
    if(dist + nextDis < dis[next]){
      dis[next] = dist + nextDis;
      pq.push(make_pair(dis[next], next));
    }
  }
}