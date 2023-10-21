#include<bits/stdc++.h>
using namespace std;
template <class T>
using V = vector<T>;
const int N = 1e5 + 9;
vector<int> par(N), gm(N), tmp(N), sz(N), ans(N, 1000000);
map<int, int> mp[N];
int f(int u){
    return ((u == par[u]) ? u : (par[u] = f(par[u])));
}
void join(int a, int b, int t){
    a = f(a);
    b = f(b);
    if (a == b) return;
    if (sz[a] < sz[b]) swap(a, b);

    par[b] = a;

    sz[a] += sz[b];
//    cout << u << " " << v << "\n";
//    par[v] = u;
    for (auto it : mp[b]){
        mp[a][it.first] += it.second;
        if (tmp[it.first] <= mp[a][it.first]){
//            cout << 123;
            ans[it.first] = min(ans[it.first], t);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, q;
    cin >> n >> m >> q;
    for (int i=1; i<=n; i++){
        int g;
        cin >> g;
        par[i] = i;
        sz[i] = 1;
        mp[i][g]++;
        tmp[g]++;
    }

    for (int t=1; t<=q; t++){
        int a, b;
        cin >> a >> b;
        join(a, b, t);
    }
    for (int i=1; i<=m; i++){
        if (tmp[i] == 1) cout << 0 << "\n";
        else
        cout << ((ans[i]!=1000000)?ans[i]:-1) << "\n";
    }
}
