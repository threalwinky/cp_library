
#include                    <bits/stdc++.h>
using                       namespace std;
//#define int               long long
#define fi                  first
#define se                  second
#define pb(x)               push_back(x)
#define endl                cout<<"\n";
typedef pair<int, int>      ii;
typedef vector<int>         vi;
typedef long double         ldb;
const string F =            "sample";
const string IF =           F + ".inp";
const string OF =           F + ".out";
const ldb PI =              3.14159265358979;
const int maxN =            1e6;
const int mod  =            1e9 + 7;
void opf(bool c){           if (c == 1){
freopen(IF.c_str(),         "r", stdin);
freopen(OF.c_str(),         "w", stdout);}}
//------------------------------------------------------------------------------------
//Code here

int a[1003][1003];
//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    int n;
    cin >> n;
    int y = n / 2 + 1;
    int x = 1;
    int cnt = 1;
    //x--, y++
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            a[x][y] = cnt++;
//            cout << x << " " << y << "\n";
            x--; y++;
            if (x < 1){
                if (y > n){
                    x += 2;
                    y -= 1;
                }
                else{
                    x = n;
                }
            }
            else if (y > n){
                y = 1;
            }
            else if (a[x][y] != 0){
                x+=2;
                y-=1;
            }
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
