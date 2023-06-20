/**
 *   author: winky
 *   created: 2023-05-29 00:41:24
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

vector<int> v(maxN), P(maxN), D(maxN);

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int n, k, q;
    cin >> n >> k >> q;
    for (int i=1; i<=n; i++){
        int x, y;
        cin >> x >> y;
        D[x]++;
        D[y + 1]--;
    }
    int tmp = 0;
    for (int i=1; i<=maxN - 1; i++){
        tmp+=D[i];
        D[i] = tmp;
    }
    for (int i=1; i<=maxN - 1; i++){
        if (D[i] >= k) P[i] = P[i - 1] + 1;
        else P[i] = P[i - 1];
    }
    //for (int i=90; i<=100; i++) cout << P[i] << " ";
    //endl;
    while (q--){
        int l, r;
        cin >> l >> r;
        cout << P[r] - P[l - 1] << "\n";
    }
}