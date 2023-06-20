#include<bits/stdc++.h>
using namespace std;

long double a[3001][3001];
long double v[3001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    a[0][0] = 1;
    for (int i=1; i<=n; i++){
        cin >> v[i];
        a[0][i] = 1;
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            a[i][j] = a[i-1][j-1]*v[j] + a[i][j-1]*(1-v[j]);
        }
    }
    // for (int i=0; i<=n; i++){
    //     for (int j=0; j<=n; j++){
    //         //a[i][j] = a[i-1][j-1]*v[i] + a[i-1][j]*(1-v[i]);
    //         cout << a[i][j] << "     ";
    //     }
    //     cout << endl;
    // }
    cout << fixed << setprecision(10) <<  a[n/2+1][n];
}