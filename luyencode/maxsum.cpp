#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, a[100001], b[100001];
    cin>>n;
    for (int i = 0; i<n; i++) cin>>a[i];
    b[0] = a[0];
    long long res = b[0];
    for (int i = 1; i<n; i++){
       	b[i] = max(0LL, b[i-1]+a[i]);
        res = max(res, b[i]);
    }
    cout<<res;
}