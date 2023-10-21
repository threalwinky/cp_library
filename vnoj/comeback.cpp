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

struct Edge{
    int v;
    ll w;
};

struct Node{
    int u;
    ll d_u;
};

struct cmp{
    bool operator () (const Node a, const Node b){
        return a.d_u > b.d_u;
    }
};

V<Edge> ed[100009];

vll di(int s){
    vll d(100009, maxll);
    V<bool> P(100009, 0);
    d[s] = 0;
    priority_queue<Node, V<Node>, cmp> pq;
    pq.push({s, d[s]});
    while (!pq.empty()){
        Node x = pq.top();
//        cout << 123;
        pq.pop();
        if (P[x.u]) continue;
        P[x.u] = 1;
        int u = x.u;
        for (auto it : ed[u]){
            int v = it.v;
            ll w = it.w;
            if (d[v] > d[u] + w){
                d[v] = d[u] + w;
                pq.push({v, d[v]});
            }
        }
    }
    return d;
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    opf(1);
    int n;
    cin >> n;
    FOR(i, 0, n){
        char u, v;
        int w;
        cin >> u >> v >> w;
        int nu, nv;
        if (u >= 'a' && u <= 'z') nu = u - 'a';
        else nu = u - 'A' + 26;
        if (v >= 'a' && v <= 'z') nv = v - 'a';
        else nv = v - 'A' + 26;
        ed[nu].push_back({nv, w});
        ed[nv].push_back({nu, w});
    }
    vll st = di('Z' - 'A' + 26);
    ll ans = maxll;
    char ansn;
    for (int i=26; i<26*2-1; i++){
//        cout << st[i] << "\n";
        if (st[i] != maxll){

            if (ans > st[i]){
                ans = st[i];
                ansn = (char)('A' + i - 26);
            }
        }
    }
    cout << ansn << " " << ans;
}
