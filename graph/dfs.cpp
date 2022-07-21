void dfs(int node, vector<int> adj[], vector<int> &storeDfs, vector<int> &vis)
{
  storeDfs.push_back(node);
  vis[node] = 1;
  for (auto it : adj[node])
  {
    if (!vis[it])
      dfs(it, adj, storeDfs, vis);
  }
}

vector<int> dfsOfGraph(int V, vector<int> adj[])
{
  vector<int> storeDfs;
  vector<int> vis(V + 1, 0);
  if (!vis[0])
    dfs(0, adj, storeDfs, vis);
  return storeDfs;
}