#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, a[100001], total = 0;
    cin>>n;
    for (int i = 0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    for (int i = 0; i<n/3*2 + n%3; i++) total += a[i];
    cout<<total;
}