#include <bits/stdc++.h>
using namespace std;
#define N 100
#define M 50000
int arr[N];
int dp[N][M];
int main(){
	freopen("thuhoach.inp", "r",stdin);
    int n,c;
    cin>>n>>c;
    for (int i = 1; i<=n; i++){
        cin >> arr[i];
    }
    memset(dp,0,sizeof(dp));
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=c; j++){
            if (arr[i] <= j)
                dp[i][j] = max(dp[i-1][j-arr[i]]+arr[i],dp[i-1][j]);
            else 
                dp[i][j] = dp[i-1][j];  
        }
    }
    cout << dp[n][c];
}