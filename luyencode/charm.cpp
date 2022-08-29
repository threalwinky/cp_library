#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;
int n, m, F[3403][12881];
pair<int, int> v[3403];
void dp(){
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++){
            if (j - v[i].first < 0) F[i][j] = F[i-1][j];
            else
            F[i][j] = max(F[i - 1][j], v[i].second + F[i - 1][j - v[i].first]);
        }
    }
}
int main(){
    cin>>n>>m;
    
    for (int i = 1;i <=n; i++){
		cin>>v[i].fi>>v[i].se;
	}
    
    dp();
    
    
    cout<<F[n][m];
}