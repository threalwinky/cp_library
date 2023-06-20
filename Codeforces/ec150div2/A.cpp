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
        if (n >= 5) cout << "Alice";
        else {
            if (n == 2) cout << "Bob";
            else if (n == 3) cout << "Bob";
            else cout << "Bob";
        }
        cout << "\n";
    }
}