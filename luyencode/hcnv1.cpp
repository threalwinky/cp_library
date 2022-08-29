#include<iostream>
using namespace std;
int main(){
    long long int a1,a2,b1,b2,x,y;
    cin>>a1>>a2>>b1>>b2>>x>>y;
    if (((a1<x&&b1>x)||(a1>x&&b1<x))&&((a2<y&&b2>y)||(a2>y&&b2<y)))
    cout<<"YES";
    else cout<<"NO";
}
