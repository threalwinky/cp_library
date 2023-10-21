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

pair<ll, ll> factor(ll n){
    ll s = 0;
    while (!(n & 1)){
        s++;
        n >>= 1;
    }
    return {s, n};
}

ll supow(ll a, ll b, ll m){
    a %= m;
    ll res = 1;
    while (b != 0){
        if (b & 1) res = (res%m*a%m)%m;
        a = (a%m*a%m)%m;
        b >>= 1;
    }
    return res;
}

bool test(ll s, ll d, ll n, ll a){
    if (n==a) return 1;
    ll p = supow(a, d, n);
    if (p == 1) return 1;
    for (;s > 0;s--){
        if (p == n-1) return 1;
        p = (p%n*p%n)%n;
    }
    return 0;
}

bool prime(ll n){
    if (n < 2) return 0;
    if (!(n&1)) return n==2;
    ll s, d;
    tie(s, d) = factor(n - 1);
    return test(s, d, n, 2) && test(s, d, n, 3);
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    opf(0);
//    ll n;
//    cin >> n;
//    ii v = factor(n);
//    cout << v.fi << " " << v.se;
//    cout << supow(8, 5, 100000);
//    for (int i=1; i<=100; i++)
//    if (prime(i))
//    cout << i << " ";
    int T;
    cin >> T;
    while (T--){
        ll l, r;
        cin >> l >> r;
        for (ll i=l; i<=r; i++){
            if (prime(i)){
                cout << i << "\n";
            }
        }
        cout << "\n";
    }
}
