bool bipartiteDfs(int node, vector<int> adj[], vector<int> &color){
    if(color[node] == -1)
        color[node] = 1;
    
    for(auto it : adj[node]){
        if(color[it] == -1){
            color[it] = 1 - color[node];
            if (!bipartiteDfs(it, adj, color))
                return false;
        }
        else if(color[it] == color[node])
            return false; 
    }
    return true;
}

bool checkBipartite(vector<int> adj[], int n){
    int color[n];
    memset(color, -1, sizeof(color));
    for(int i = 0; i < n; i++){
        if(color[i] == -1){
            if(!bipartiteDfs(i, adj, color))
                return false;
        }
    }
    return true;
}