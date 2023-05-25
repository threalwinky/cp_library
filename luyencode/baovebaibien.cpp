#include<bits/stdc++.h>
using namespace std;
char a[1005][1005];
int f[1005][1005];
int dx[] = {0, 1, 0, -1, 0, -1, 1, -1, 1}, dy[] = {0, 0, 1, 0, -1, 1, -1, -1, 1};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>>n>>m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    int ans = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (a[i][j] == '1'){
                for (int k = 0; k<9; k++){
                    int newi = i + dx[k], newj = j + dy[k];
                    f[newi][newj]=1;
                }
            }
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (f[i][j] == 1) ans++;
        }
    }
    cout<<ans;
}
