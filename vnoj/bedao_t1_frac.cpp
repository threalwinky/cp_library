/**
 *   author: winky
 *   created: 2023-06-01 21:02:07
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

vector<int> v(maxN);
map<int, int> m;
int lcm(int a, int b){
    int tmp = __gcd(a, b);
    return (a*b)/tmp;
}
void add(int x){
    for (int i=2; i<=x;i++){
        int tmp1 = 0;
        while (x % i == 0){
            x/=i;
            tmp1++;
        }
        if (tmp1 != 0)
        m[i]+=tmp1;
    }
    return;
}
void sub(int x){
    for (int i=2; i<=x; i++){
        int tmp1 = 0;
        while (x % i == 0){
            x/=i;
            tmp1++;
        }
        if (tmp1 != 0)
        m[i] -= tmp1;
    }
}
signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int n;
    cin >> n;
    int a , b;
    bool flag = 0;
    if (n == 0){
        cout << "impossible";
        return 0;
    }
    cin >> v[1];
    a = b = v[1];
    if (v[1] == 0) flag = 1;
    for (int i=2; i<=n; i++){
        cin >> v[i];
        //cout << v[i] << " ";
        if (v[i] == 0) flag = 1;
        b = __gcd(b, v[i]);
        cout << b << " " ;
    }
    if (flag) cout << "impossible";
    else cout << (int)b;
}