/**
 *   author: winky
 *   created: 2023-05-28 21:58:20
**/

#include                    <bits/stdc++.h>
using namespace             std;
#define tri(a, b, c)        ((a) ? (b) : (c))
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define debug(x)            cerr<<"+Debug for "<<(#x)<<" : "<<x<<"\n";
#define endl                cout<<"\n";
//#define int               long long
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

struct DSU{
    vector<int> par, sz;
    void init(int n){
        par.resize(n + 1);
        sz.resize(n + 1);
        for (int i=1; i<=n; i++){
            par[i] = i;
        }
    }
    void print(){
        for (auto x : par) cout << x << " ";
    }
    void add(int u, int v){
        if (u > v) swap(u, v);
        par[v] = u;
    }
    int find(int u, int tmp){
        if (par[u] == 1) return tmp;
        return find(par[u], tmp + 1);
    }
    int ans(int n){
        for (int i=1; i<=n; i++){
            int tmp = 0;
            cout << find(i, 1) << " ";
        }
    }
};

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    DSU dsu;
    int T;
    cin >> T;
    while (T--){
    int n;
    cin >> n;
    dsu.init(n);
    for (int i=1; i<n; i++){
        int x, y;
        cin >> x >> y;
        dsu.add(x, y);
    }
    dsu.print();
    endl;
    cout << dsu.ans(n);
    }
}