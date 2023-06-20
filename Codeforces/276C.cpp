/**
 *   author: winky
 *   created: 2023-06-04 14:54:28
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

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1), D(n + 2);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    while (q--){
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        D[l]++;
        D[r + 1]--;
    }
    int tmp = 0;
    for (int i=0; i<n; i++){
        tmp += D[i];
        D[i] = tmp;
        //cout << D[i] << " ";
    }
    sort(D.begin(), D.begin() + n);
    sort(v.begin(), v.begin() + n);
    int ans = 0;
    for (int i=0; i<n; i++){
        ans += D[i]*v[i];
        //cout << D[i] << " " << v[i] << "\n";
    }
    cout << ans;
}