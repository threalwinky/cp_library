#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, a[100001], b[100001];
    cin>>n;
    for (int i = 0; i<n; i++) cin>>a[i];
    for (int i = 0; i<n-2; i++) b[i] = a[i+2] - a[i];
    sort(b, b+n-2, greater<int>());
    cout<<b[0];
}