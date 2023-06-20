#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i<m; i++){
        ans = max(ans, v[i]*(i + 1));
        if (i == n - 1) break;
    }
    cout << ans;
}