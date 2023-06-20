/**
 *   author: winky
 *   created: 2023-06-04 15:45:33
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

struct upd{
    int l;
    int r;
    int x; 
};

vector<upd> U(maxN);
vector<int> arr(maxN);
vector<int> D(maxN), D2(maxN);
signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int a, b, c;
    cin >> a >> b >> c;
    for (int i=1; i<=a; i++){
        cin >> arr[i];
    }
    for (int i=1; i<=b; i++){
        int x, y, z;
        cin >> x >> y >> z;
        U[i] = {x, y, z};
    }
    for (int i=1; i<=c; i++){
        int l, r;
        cin >> l >> r;
        D[l]++;
        D[r + 1]--;
    }
    for (int i=1; i<=b; i++){
        D[i] = D[i - 1] + D[i];
        upd tmp = U[i];
        D2[tmp.l] += tmp.x * D[i];
        D2[tmp.r+1] -= tmp.x * D[i];
    }
    for (int i=1; i<=a; i++){
        D2[i] = D2[i-1] + D2[i];
        cout << D2[i] + arr[i] << " ";
    }
}