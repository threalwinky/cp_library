#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a[1001][1001]; cin>>n;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<=i; j++){
            if (j == 0 || j == i) a[i][j] = 1;
            else a[i][j] = a[i-1][j] + a[i-1][j-1];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}a