#include                    <bits/stdc++.h>
using                       namespace std;
#define fi                  first
#define se                  second
#define endl                cout<<'\n';
//Data types macros
//#define int                 long long //uncomment if needed
using ll =                  long long;
using ull =                 unsigned long long;
using ldb =                 long double; //or double if TL is tight
using str =                 string; //python type
using ii =                  pair<int, int>;
using mii =                 map<int, int>;
#define mp                  make_pair
#define tcT                 template<class T
#define tcTU                tcT, class U
tcT > using V =             vector<T>;
using vi =                  V<int>;
using vb =                  V<bool>;
using vll =                 V<ll>;
using vull =                V<ull>;
using vldb =                V<ldb>;
using vii =                 V<ii>;
using vstr =                V<str>;
//Vector functions
#define sz(x)               (int)(x.size())
#define bg(x)               x.begin()
#define all(x)              bg(x), x.end
#define rall(x)             x.rbegin(), x.rend()
#define grt                 greater<int>()
#define ft                  front
#define bk                  back
#define pb                  push_back
#define lb(v,x)             lower_bound(all(v),x)
#define ub(v,x)             upper_bound(all(v),x)
#define ld(v,x)             lower_bound(rall(v),x,grt);
#define ud(v,x)             upper_bound(rall(v),x,grt);
//Loops
#define FOR(i,a,b)          for (int i=(a); i<(b); i++)
#define FORD(i,a,b)         for (int i=(a)-1; i>=(b); i--)
#define F0R(i,a)            FOR(i,0,a)
#define F0RD(i,a)           FORD(i,0,a)
#define FORE(i,a)           for (auto i:a)
//File accessing
const string FI =           "sample";
const string IFI =          FI + ".inp";
const string OFI =          FI + ".out";
void opf(bool c){           if (c == 1){
freopen(IFI.c_str(),        "r", stdin);
freopen(OFI.c_str(),        "w", stdout);}}
//Constants
const ldb PI =              3.14159265358979;
const int maxI =            INT_MAX;
const ll maxll =            LLONG_MAX;
const int N =               1e6;
const int mod  =            1e9 + 7;
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
//------------------------------------------------------------------------------------
//Code here

map<int, int> m[1000001];

struct DSU{
    vi p, sz;
    void init(vi v){
        int n = v.size();
        p.resize(n+9);
        sz.resize(n+9);
        for (int i=1; i<=n; i++){
            p[i] = i;
            sz[i] = 1;
            m[i][v[i]]++;
        }
    }
    int find(int u){
        if (u == p[u]) return u;
        return find(p[u]);
    }
    void link(int u, int v){
        u = find(u), v = find(v);
        if (u == v) return;
        p[v] = u;
        for (auto it : m[v]){
            m[u][it.first]+=it.second;
        }
        for (auto it : m[u]){
            m[v][it.first]+=it.second;
        }
    }
};

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    opf(0);
    int n;
    cin >> n;
    vi v(n + 9);
    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    DSU dsu;
    dsu.init(v);
    for (int i=1; i<n; i++){
        int a, b;
        cin >> a >> b;
        dsu.link(a, b);
    }
    for (int i=1; i<=n; i++){
        int cnt = 0;
        for (auto it : m[i]) if (it.second != 0) cnt++;
        cout << cnt << " ";
    }
}
