#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d[3];
    cin>>a>>b>>c;
    d[0] = a;
    d[1] = b;
    d[2] = c;
    sort(d, d+3, greater<int>());
    cout<<d[0]<<d[1]<<d[2];
    
}