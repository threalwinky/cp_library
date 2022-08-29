#include<iostream>
using namespace std;
int main(){
    long long n; cin>>n;
    if (n == 0) cout<<1;
    else
    cout<<n*(n-1)+2;
}