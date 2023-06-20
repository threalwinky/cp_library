/**
 *   author: winky
 *   created: 2023-05-28 15:05:32
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

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int n, s, t;
    cin >> n >> s >> t;
    vector <int> v(n), V(n);
    bool flag = 0;
    int ans = 0;
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    int tmp = s - 1;
    while (!flag){
        if (V[tmp] == 1){
            flag = 1;
            break;
        }
        //cout << tmp << " ";
        if (tmp == t - 1){
            break;
        }
        else{
            V[tmp] = 1;
            tmp = v[tmp] - 1;
            ans++;
        }
        
    }
    if (flag) cout << -1;
    else cout << ans;
}