/**
 *   author: winky
 *   created: 2023-05-29 23:39:19
**/

#include                    <bits/stdc++.h>
using namespace             std;
#define tri(a, b, c)        ((a) ? (b) : (c))
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define debug(x)            cerr<<"+Debug for "<<(#x)<<" : "<<x<<"\n";
#define endl                cout<<"\n";
#define int               long long
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

map<int, int> st;

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int n;
    cin >> n;
    for (int i=2; i<=100000; i++){
        st[i*(i - 1)/2]++;
    }
    bool flag = 0;
    int i = 1;
    for (auto x : st){
        //cout << i++ << " " << x.fi << " " << x.se <<"\n" ;
        int tmp = n - x.fi;
        if (st[tmp] != 0 && st[x.fi]){
            flag = 1;
        }
    }
    cout << tri(flag, "YES", "NO");
}