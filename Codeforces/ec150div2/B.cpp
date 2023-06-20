#include                    <bits/stdc++.h>
using namespace             std;
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define endl                cout<<"\n";
//#define int               long long
const int maxN =            3e5;
const int mod =             1e9 + 7;

signed main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        vector<int> v;
        bool flag = 0;
        int x;
        cin >> x;
        v.push_back(x);
        cout << 1;
        for (int i=1; i<n; i++){
            int x;
            cin >> x;
            //cout << flag;
            if (flag){
                if (x >= v.back()){
                    if (x <= v[0]){
                        cout << 1;
                        v.push_back(x);
                    }
                    else {
                        cout << 0;
                    }
                }
                else{
                    cout << 0;
                }
            }
            else{
                if (x >= v.back()) {
                    cout << 1;
                    v.push_back(x);
                }
                else{
                    cout << 1;
                    flag = 1;
                    v.push_back(x);
                }
            }
        }
        cout << "\n";
    }
}