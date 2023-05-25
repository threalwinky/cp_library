#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while (T--){
        map<int, int> m;
        int n;
        cin>>n;
        for (int i = 1; i<=n; i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int ans = 0, tmp = 0, tmp1, tmp2, mintmp = INT_MAX;
        for (auto x : m){
            if (x.second == n - x.first){
                tmp = 2;
                tmp1 = n-x.first;
                break;
            }
            if (x.first < n - x.second){
                tmp = 1;
                tmp2 = n - x.second;
            }
        }
        if (tmp == 2) cout<<n-tmp1;
        else if (tmp == 0)cout<<"-1";
        else{
            cout<<tmp2;
        };
        cout<<"\n";
    }
}
