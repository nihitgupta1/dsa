void dfs(int node, vector<int> &vis, vector<int> adj[], stack<int> &st){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it])
            dfs(it, vis, adj, st);
    }
    st.push(node);
}

vector<int> topoSort(int n, vector<int> adj[]){
    stack<int> st;
    vector<int> vis(n, 0);
    for(int i = 0; i < n; i++){
        if(!vis[i])
            dfs(i, vis, adj, st);
    }
    vector<int> topo;
    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
}