#include<bits/stdc++.h>
using namespace std;

int arr[1001][1001];

bool sdx(int a, int b, int x){
    if (b & 1) return 0;
    for (int i=1; i<=a; i++){
        for (int j = 1; j<=x; j++){
            if (arr[i][j] != arr[b - i + 1][j]) return 0;
        }
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> arr[i][j];
        }
    }
    while (sdx(n/2, n, m) == 1){
        n/=2;
    }
    cout << n;
}
