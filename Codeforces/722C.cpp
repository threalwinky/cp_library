/**
 *   author: winky
 *   created: 2023-06-05 14:26:22
**/

#include                    <bits/stdc++.h>
using namespace             std;
#define tri(a, b, c)        ((a) ? (b) : (c))
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define debug(x)            cerr<<"+Debug for "<<(#x)<<" : "<<x<<"\n";
#define endl                cout<<"\n";
#define int               long long
typedef pair<int, int>      ii;
typedef long long           ll;
const int maxN =            3e5;
const int mod =             1e9 + 7;
const int inf =             INT_MAX;
const double PI =           3.14159265358979;
const auto INP_FILE =       "sample.inp";
const auto OUT_FILE =       "sample.out";
void IO(short choice){      if (choice == 1) freopen(INP_FILE, "r", stdin);
else                        if (choice == 2){freopen(INP_FILE, "r", stdin); freopen(OUT_FILE, "w", stdout);}
else                        if (choice == 3) ios::sync_with_stdio(false);cin.tie(nullptr);}
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/

int a[maxN], p[maxN];
bool flag[maxN];
struct DSU{
    vector<int> par, sz, sum;
    void init(int n){
        par.resize(n + 9, 0);
        sz.resize(n + 9, 0);
        sum.resize(n + 9, 0);
        for (int i=1; i<=n; i++){
            par[i] = i;
            sz[i] = 1;
            sum[i] = a[i];
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
            sum[u] += sum[v];
        }
    }
};


signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int n, ans = 0;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }    
    for (int i=1; i<=n; i++){
        cin >> p[i];
    }
    DSU dsu;
    dsu.init(n);
    stack<int> st;
    st.push(0);
    for (int i = n; i>=2; i--){
        flag[p[i]] = 1;
        if (p[i] > 1 && flag[p[i] - 1]) dsu.join(p[i], p[i] - 1);
        if (p[i] < n && flag[p[i] + 1]) dsu.join(p[i], p[i] + 1);
        ans = max(ans, dsu.sum[dsu.find(p[i])]);
        st.push(ans);
    }
    while (!st.empty()){
        cout << st.top() << "\n";
        st.pop();
    }
}