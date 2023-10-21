#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
map<int, int> m[N];
vector<int> adj[N];
vector<int> v(N + 9);
vector<int> f(N + 9);

bool check[N];

void dfs(int u, int p){
//    check[u] = 1;
//    cout << u << " ";
    for (auto v : adj[u]){
        if (v != p){
            dfs(v, u);
            for (auto it : m[v]){
                m[u][it.first]+=it.second;
            }
        }

    }
    m[u][v[u]]++;
//    cout << u << " : " << "\n";
//    for (auto it : m[u]){
//        cout << it.first << " " << it.second << "\n";
//    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    for (int i=1; i<=n-1; i++){
        int a, b;
        cin >> a >> b;
//        cout << a << " " << b << " ";
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0);
//    for (auto it : adj[9]){
//        cout << it << " ";
//    }
    for (int i=1; i<=n; i++){
        cout << m[i].size() << " ";
    }
}
