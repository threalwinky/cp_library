#include<bits/stdc++.h>
using namespace std;
struct DSU{
    vector<int> par;
    vector<int> sz;
    void init(){
        par.resize(100000, 0);
        sz.resize(100000, 1);
        for (int i=1; i<=100000; i++){
            par[i] = i;
            sz[i] = 1;
        }
    }
    int find(int u){
        if (u == par[u]) return u;
        int p = find(par[u]);
        par[u] = p;
        return p;
    }
    void join(int u, int v){
        u = find(u);
        v = find(v);
        if (u != v){
            if (sz[u] < sz[v]) swap(u, v);
            par[v] = u;
            sz[u] += sz[v];
        }
    }
    bool can(int u, int v){
        return find(u) == find(v);
    }
};

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    DSU dsu;
    dsu.init();
    int p;
    cin>>p;
    while (p--){
        int x, y, z;
        cin>>x>>y>>z;
        if (z == 1) dsu.join(x, y);
        else cout<<dsu.can(x, y)<<"\n";
    }
}
