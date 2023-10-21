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


struct hw{
    int a, b;
};

vector<hw> w1;

bool cmp(hw a, hw b){
    return (a.a - a.b) < (b.a - b.b);
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    opf(0);
    int n;
    cin >> n;
//    for (int i=1; i<=2*n; i++){
//        int a, b;
//        cin >> a >> b;
//        if (a < b) w1.push_back({a, b});
//        else w2.push_back({a, b});
//    }
//    int s1 = 0, s2 = 0;
//    if (w1.size() == w2.size()){
//        for (auto it : w1) s1+=it.a;
//        for (auto it : w2) s2+=it.b;
//        cout << s1 + s2;
//    }
//    else if (w1.size() > w2.size()){
//        sort(w1.begin(), w1.end(), cmp);
//        for (int i=0; i<n; i++){
//            s1 += w1[i].a;
//        }
//        for (int i=n; i<w1.size(); i++){
//            s2 += w1[i].b;
//        }
//        for (int i=0; i<w2.size(); i++){
//            s2 += w2[i].b;
//        }
//        cout << s1 + s2;
//    }
//    else{
//        sort(w2.begin(), w2.end(), cmp);
//        for (int i=0; i<n; i++){
//            s2 += w2[i].b;
//        }
//        for (int i=n; i<w2.size(); i++){
//            s1 += w2[i].a;
//        }
//        for (int i=0; i<w1.size(); i++){
//            s1 += w1[i].a;
//        }
//        cout << s1 + s2;
//    }
    for (int i=0; i<2*n; i++){
        int a, b;
        cin >> a >> b;
        w1.push_back({a, b});
    }
    sort(w1.begin(), w1.end(), cmp);
    int ans = 0;
    for (int i=0; i<n; i++){
        ans += w1[i].a;
    }
    for (int i=0; i<n; i++){
        ans += w1[n+i].b;
    }
    cout << ans;
}
