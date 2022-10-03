// Undirected Graph

bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[]){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            if(checkForCycle(it, node, vis, adj))
                return true;
        }
        else if(it != parent)
            return true;
    }
    return false;
}

bool isCycle(int v, vector<int> adj[]){
    vector<int> vis(v+1, 0);
    for(int i = 1; i <= v; i++){
        if(!vis[i]){
            if(checkForCycle(i, -1, vis, adj))
                return true;
        }
    }
    return false;
}

// Directed Graph

bool checkCycle(int node, vector<int> adj[], int vis[], int dfsVis[]){
    vis[node] = 1;
    dfsVis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            if(checkCycle(it, adj, vis, dfsVis))
                return true;
        }
        else if(dfsVis[it])
            return true;
    }
    dfsVis[node] = 0;
    return false;
}