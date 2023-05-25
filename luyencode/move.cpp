#include<bits/stdc++.h>
using namespace std;
int a[1001][1001], f[1001][1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin>>m>>n;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    for (int i=1; i<=n; i++){
        f[1][i] = f[1][i-1] + a[1][i];
    }
    for (int i=1; i<=m; i++){
        f[i][1] = f[i-1][1] + a[i][1];
    }

    for (int i=2 ;i<=m; i++){
        for (int j=2; j<=n; j++){
            f[i][j] = max(f[i-1][j], f[i][j-1]) + a[i][j];
        }
    }
    cout<<f[m][n];
}
