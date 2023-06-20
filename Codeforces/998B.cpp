/**
 *   author: winky
 *   created: 2023-05-28 15:27:10
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
    int n, B;
    cin >> n >> B;
    vector<int> v(n);
    vector<ii> p(n);
    vector<int> tmp;
    for (int i=0; i<n; i++){
        cin >> v[i];        
        p[i] = p[i - 1];
        if (i == 0) p[i] = {0, 0};
        if (v[i] & 1) p[i].fi++;
        else p[i].se++;   
    }
    for (int i=0; i<n; i++){
        if (p[i].fi == p[i].se && i != 0 && i != n - 1){
            //cout << v[i] << " " << v[i + 1];
            tmp.push_back(abs(v[i] - v[i + 1]));
        }
    }
    sort(tmp.begin(), tmp.end());
    int ans1= 0, ans2 = 0;
    for (auto x : tmp){
        if (ans1 + x <= B){
            ans1 += x;
            ans2 ++;
        }
        else break;
    }
    cout << ans2;
}