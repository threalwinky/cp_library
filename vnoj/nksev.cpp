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
#define bg(x)               x.begin
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
const int mod  =            1337377;
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
//------------------------------------------------------------------------------------
//Code here

string s;
int l;
int f[400000];

const int ALSZ = 26;
struct Trie{
    struct Node{
        Node *child[ALSZ];
        int ext = 0, cnt = 0;
    };
    Node *make(){
        Node *node = new Node();
        for (int i=0; i<ALSZ; i++)
            node->child[i] = NULL;
        return node;
    }
    Node *root = make();
    void add(string s){
        Node *node = root;
        for (int i=0; i<s.length(); i++){
            if (node->child[s[i]-'a'] == NULL)
                node->child[s[i]-'a']=make();
            node=node->child[s[i]-'a'];
        }
        node -> ext |= 1;
        node -> cnt ++;
    }
    bool find(string s){
        Node *node = root;
        for (int i=0; i<s.length(); i++){
            if (!node->child[s[i]-'a'])
                return 0;
            node=node->child[s[i]-'a'];
        }
        return 1;
    }
    int count(string s){
        Node *node = root;
        for (int i=0; i<s.length(); i++){
            if (!node->child[s[i]-'a'])
                return 0;
            node=node->child[s[i]-'a'];
        }
        return node->cnt;
    }
};


//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    opf(0);
    Trie t;
    string s;
    cin >> s;
    l = s.length();
    int n;
    cin >> n;
    while (n--){
        string tmp;
        cin >> tmp;
        t.add(tmp);
    }
    f[l] = 1;
    for (int i=l-1; i>=0; i--){
        Trie tmp = t;
        for (int j=i; j<l; j++){
            int id = s[j] - 'a';
            if(tmp.root->child[id]==NULL) break;
            tmp.root = tmp.root->child[id];
            if (tmp.root->ext) f[i] = (f[i]%mod+f[j+1]%mod)%mod;
        }
    }
    cout << f[0]%mod;
}
