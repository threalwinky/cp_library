#include<bits/stdc++.h>
using namespace std;
#define int long long
int F[1001][5];

signed main(){

    F[2][1] = 1;
    F[2][2] = 1;
    F[2][3] = 1;
    F[2][4] = 1;
    int n;
    cin >> n;
    if (n==1) cout << 2;
    for (int i=3; i<=n; i++){
        F[i][1] = F[i-1][1] + F[i-1][2];
        F[i][2] = F[i-1][2] + F[i-1][4];
        F[i][3] = F[i-1][3] + F[i-1][1];
        F[i][4] = F[i-1][3];
    }
    int ans = 0;
    for (int i=1; i<=4; i++){
        ans += F[n][i];
    }
    cout << ans;
}