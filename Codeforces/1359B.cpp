/**
 *   author: winky
 *   created: 2023-05-28 21:22:36
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

char a[1001][1001];
int F[1001][1001];

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int T;
    cin >> T;
    while (T--){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int tmp = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> a[i][j];
            if (a[i][j] == '.') tmp++;
        }
        a[i][m + 1] = '0';
        if (i == n){
            for (int j=1; j<=m; j++){
                a[i + 1][j] = '0';
            }
        }
    }
    if (2 * x <= y){
        cout << tmp * x;
        endl;
    }
    else{
        int ans = 0;
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                if (a[i][j] == '.'){
                    if (a[i][j + 1] == '.'){
                        a[i][j] = '*';
                        a[i][j + 1] = '*';
                        ans+=y;
                    }
                    else ans+=x;
                }
            }
        }
        cout << ans;
        endl;
    }
    }
}