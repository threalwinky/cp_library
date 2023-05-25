/**
 *   author: winky
 *   created: 2023-05-13 19:59:54
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
//#define int               long long
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

vector<int> v[10001], tv[10001];
bool check[maxN];
int sum = 0;
stack<int> st;

void dfs(int u){
    check[u] = 1;
    fa(x, v[u]){
        if (!check[x]){
            dfs(x);
        }
    }
    st.push(u);
}

void dfs1(int u){
    sum++;
    check[u] = 1;
    fa(x, tv[u]){
        if (!check[x]){
            dfs1(x);
        }
    }
}
signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int T;
    cin>>T;
    while (T--){
        int n;
        cin>>n;
        for (int i =1; i<=n; i++){
            v[i].clear();
            tv[i].clear();
        }
        memset(check, false, maxN);
        for (int i=1; i<=n; i++){
            int x;
            cin>>x;
            v[i].push_back(x);
            tv[x].push_back(i);
        }
        for (int i=1; i<=n; i++){
            if (!check[i]) dfs(i);
        }
        memset(check, false, maxN);
        bool flag = 0;
        while (!st.empty()){
            int tmp = st.top();
            if (!check[tmp]){
                sum = 0;
                dfs1(tmp);
                if (sum == 3) flag = 1;
            }
            st.pop();
        }
        cout<<((flag == 1) ? "<3" : "</3")<<"\n";
    }
}
