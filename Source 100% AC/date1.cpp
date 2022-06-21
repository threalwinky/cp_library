#include<iostream>
using namespace std;
int main(){

    int n,y,d,m;
    cin>>n>>y;
    if (y%4 == 0)
    m = n/31+1;
    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        cout<<n-31*(m-1)<<" "<<m;
    }
    else cout<<n-30*(m-1)<<" "<<m;
}
