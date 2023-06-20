#include<bits/stdc++.h>
using namespace std;
#define int long long

void print(int n, int m){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout << F[i][j] << " ";
        }
        cout << "\n";
    }
}

vector<pair<int, int>> v(1002);

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }
}