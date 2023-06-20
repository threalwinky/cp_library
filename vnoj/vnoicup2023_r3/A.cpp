#include                    <bits/stdc++.h>
using namespace             std;
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define endl                cout<<"\n";
#define int               long long
const int maxN =            3e5;
const int mod =             1e9 + 7;

signed main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--){
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> v(n);
        for (int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<pair<int, int>> tmp;
        for (int i=0; i<n-1; i++){
            tmp.push_back({v[i] - v[0], v[n-1] - v[i + 1]});
        }
        bool flag = 0;
        for (auto x : tmp){
            if ((x.first <= a && x.second <= b) || (x.first <= b && x.second <= a)){
                flag = 1;
                
                //break;
            }
            //cout << x.first << " "  << x.second << "\n";
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
}   