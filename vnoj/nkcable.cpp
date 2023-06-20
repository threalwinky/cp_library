#include<bits/stdc++.h>
using namespace std;

int f[100001];
int a[100001];
int main(){
    int n;
    cin >> n;
    for (int i=1; i<=n -1; i++){
        cin >> a[i];
    }
    f[1] = a[1];
    for (int i=2; i<=n; i++){
        f[i] = min(f[i-2] + a[i-1], f[i-1] + a[i-1]);
    }
    cout << f[n];
}