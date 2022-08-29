#include<iostream>
using namespace std;
typedef unsigned long long ull;
ull sum(int n){
    ull temp = 0;
    while (n!=0){
        temp+=n%10;
        n/=10;
    }
    return temp;
}
int main(){
    ull n; cin>>n;
    while (n/10!=0){
        n = sum(n);
    }
    cout<<n;
}