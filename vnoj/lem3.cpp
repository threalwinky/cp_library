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
int a[1001][1001];
int f[1001][1001];

int sol(int i, int j){
    if (i > j) return 10000000;
    if (i == j){
        return a[i][j];
    }
    return min(a[i][i+1] + sol(i+1, j), a[i][j-1] + sol(j-1, j));
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    opf(0);
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
        cin >> a[i][j];
    cout << sol(1, n);
}
