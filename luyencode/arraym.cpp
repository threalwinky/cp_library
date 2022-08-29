#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    long long a[n+2] = {0};
    for (int i = 1; i<=m; i++){
        int u, v, k;
        cin>>u>>v>>k;
        a[u] += k;
        a[v+1] -= k;
    }
    long long maxn = a[1];
    for (int i = 2; i<=n; i++){
        a[i] += a[i-1];
        maxn = max(maxn, a[i]);
    }
    cout<<maxn;
}