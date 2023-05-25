#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
bool legit(int b, int c, int d){
    return ((b >= c) && (b <= d));
}
void dfs(int i, int j, int n, int m){
    a[i][j] = 0;
    for (int k = 0; k<4; k++){
        int newi = i + dx[k];
        int newj = j + dy[k];
        if (legit(newi, 1, n) && legit(newj, 1, m) && a[newi][newj] != 0){
            a[i][j] = 0;
            dfs(newi, newj, n,m);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>>n>>m;
    for (int i = 1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (a[i][j] != 0){
                dfs(i, j, n, m);
                //cout<<i<<" "<<j<<"\n";
                ans++;
            }
        }
    }
    cout<<ans;
}
