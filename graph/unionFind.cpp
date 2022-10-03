int rank[1000];
int parent[1000];

void makeSet(){
    for(int i = 1; i <= n ; i++){
        parent[i] = i;
        rank[i] = 0;
    }
}

int findPar(int node){
    if(node == parent[node])
        return node;

    return parent[node] = findPar(parent[node]);
}

void union(int u, int  v){
    u = findPar[u];
    v = findPar[v];

    if(rank[u] > rank[v])
        parent[v] = u;
    else if(rank[v] > rank[u])
        parent[u] = v;
    else{
        parent[v] = u;
        rank[u]++;
    }
}

void main(){
    makeSet();
    int m;
    while(m--){
        int u, v;
        union(u, v);
    }
}