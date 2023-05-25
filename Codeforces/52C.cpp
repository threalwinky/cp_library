/**
 *   author: winky
 *   created: 2023-05-24 23:08:22
**/

// Obey my waifu
//⢸⣿⣿⣿⣿⠃⠄⢀⣴⡾⠃⠄⠄⠄⠄⠄⠈⠺⠟⠛⠛⠛⠛⠻⢿⣿⣿⣿⣿⣶⣤⡀⠄
//⢸⣿⣿⣿⡟⢀⣴⣿⡿⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣸⣿⣿⣿⣿⣿⣿⣿⣷
//⢸⣿⣿⠟⣴⣿⡿⡟⡼⢹⣷⢲⡶⣖⣾⣶⢄⠄⠄⠄⠄⠄⢀⣼⣿⢿⣿⣿⣿⣿⣿⣿⣿
//⢸⣿⢫⣾⣿⡟⣾⡸⢠⡿⢳⡿⠍⣼⣿⢏⣿⣷⢄⡀⠄⢠⣾⢻⣿⣸⣿⣿⣿⣿⣿⣿⣿
//⡿⣡⣿⣿⡟⡼⡁⠁⣰⠂⡾⠉⢨⣿⠃⣿⡿⠍⣾⣟⢤⣿⢇⣿⢇⣿⣿⢿⣿⣿⣿⣿⣿
//⣱⣿⣿⡟⡐⣰⣧⡷⣿⣴⣧⣤⣼⣯⢸⡿⠁⣰⠟⢀⣼⠏⣲⠏⢸⣿⡟⣿⣿⣿⣿⣿⣿
//⣿⣿⡟⠁⠄⠟⣁⠄⢡⣿⣿⣿⣿⣿⣿⣦⣼⢟⢀⡼⠃⡹⠃⡀⢸⡿⢸⣿⣿⣿⣿⣿⡟
//⣿⣿⠃⠄⢀⣾⠋⠓⢰⣿⣿⣿⣿⣿⣿⠿⣿⣿⣾⣅⢔⣕⡇⡇⡼⢁⣿⣿⣿⣿⣿⣿⢣
//⣿⡟⠄⠄⣾⣇⠷⣢⣿⣿⣿⣿⣿⣿⣿⣭⣀⡈⠙⢿⣿⣿⡇⡧⢁⣾⣿⣿⣿⣿⣿⢏⣾
//⣿⡇⠄⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢻⠇⠄⠄⢿⣿⡇⢡⣾⣿⣿⣿⣿⣿⣏⣼⣿
//⣿⣷⢰⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⢰⣧⣀⡄⢀⠘⡿⣰⣿⣿⣿⣿⣿⣿⠟⣼⣿⣿
//⢹⣿⢸⣿⣿⠟⠻⢿⣿⣿⣿⣿⣿⣿⣿⣶⣭⣉⣤⣿⢈⣼⣿⣿⣿⣿⣿⣿⠏⣾⣹⣿⣿
//⢸⠇⡜⣿⡟⠄⠄⠄⠈⠙⣿⣿⣿⣿⣿⣿⣿⣿⠟⣱⣻⣿⣿⣿⣿⣿⠟⠁⢳⠃⣿⣿⣿
//⠄⣰⡗⠹⣿⣄⠄⠄⠄⢀⣿⣿⣿⣿⣿⣿⠟⣅⣥⣿⣿⣿⣿⠿⠋⠄⠄⣾⡌⢠⣿⡿⠃
//⠜⠋⢠⣷⢻⣿⣿⣶⣾⣿⣿⣿⣿⠿⣛⣥⣾⣿⠿⠟⠛⠉⠄⠄⠄⠄⣾⡌⢠⣿⡿⠃

#include                    <bits/stdc++.h>
using namespace             std;
//#pragma GCC               optimize("Ofast,unroll-loops,inline")
//#pragma GCC               target("bmi,bmi2,lzcnt,popcnt")
//#pragma GCC               target("movbe")
//#pragma GCC               target("aes,pclmul,rdrnd")
//#pragma GCC               target("avx,avx2,f16c,fma,sse,sse2,sse3,ssse3,sse4,sse4.1,sse4.2,abm,mmx,avx,tune=native")
#define fu(i, a, b)         for (int i = a; i<=b; i++)
#define fd(i, a, b)         for (int i = a; i>=b; i--)
#define fa(it, arr)         for (auto it : arr)
#define tri(a, b, c)        ((a) ? (b) : (c))
#define carr(arr, n)        cout<<"[";fu(i, 1, n ){cout<<arr[i]<<tri(i == n, "", ", ");}cout<<"]\n";
#define fi                  first
#define se                  second
#define all(it)             it.fi << " " << it.se <<"\n"
#define debug(x)            cerr<<"+Debug for "<<(#x)<<" : "<<x<<"\n";
#define comma(f, x)         fixed << setprecision((x)) << f
#define endl                cout<<"\n";
#define int               long long
typedef pair<int, int>      ii;
typedef long long           ll;
typedef vector<int>         vi;
typedef vector<ii>          vii;
typedef vector<ll>          vll;
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

int a[maxN], st[maxN*4], lazy[maxN*4];
 
void build(int id, int l, int r){
    if (l == r){
        st[id] = a[l];
        return;
    }
    int m = l + (r - l)/2;
    build(id*2, l, m);
    build(id*2+1, m+1, r);
    st[id] = min(st[id*2], st[id*2+1]);
}
 
void fix(int id, int l, int r){
    if (!lazy[id]) return;
    st[id] += lazy[id];
    if (l!=r){
        lazy[id*2] += lazy[id];
        lazy[id*2+1] += lazy[id];
    }
    lazy[id] = 0;
}
 
void update(int id, int l, int r, int u, int v, int val){
    fix(id, l, r);
    if (l > v || r < u) return;
    if (l >= u && r <= v){
        lazy[id] += val;
        fix(id, l, r);
        return;
    }
    int m = l + (r - l)/2;
    update(id*2, l, m, u, v, val);
    update(id*2+1, m+1, r, u, v, val);
    st[id] = min(st[id*2], st[id*2+1]);
}
 
int get(int id, int l, int r, int u, int v){
    fix(id, l, r);
    if (l > v || r < u) return inf;
    if (l >= u && r <= v){
        return st[id];
    }
    int m = l + (r - l)/2;
    int get1 = get(id*2, l, m, u, v);
    int get2 = get(id*2+1, m+1, r, u, v);
    return min(get1, get2);
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 1; i<=n; i++){
        cin>>a[i];
    }
    build(1, 1, n);
    int q;
    cin>>q;
    cin.ignore();
    while (q--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> v;
        int a, b, c;
        int word;
        while (ss>>word){
            v.push_back(word);
        }
        if (v.size() == 2){
            a = v[0];
            b = v[1];
            if (a == b) cout<<get(1, 1, n, a+1, b+1);
            else{
                if (a < b) cout<<get(1, 1, n, a+1, b+1);
                else cout<<min(get(1, 1, n, a+1, n), get(1, 1, n, 1, b+1));
            }
            cout<<"\n";
        }
        else{
            a = v[0];
            b = v[1];
            c = v[2];
            if (a == b) update(1, 1, n, a+1, b+1, c);
            else{
                if (a < b) update(1, 1, n, a+1, b+1, c);
                else{
                    update(1, 1, n, a+1, n, c);
                    update(1, 1, n, 1, b+1, c);
                }
            }
        }
    }
}
