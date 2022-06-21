#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1001],min = 10000,max =-10000;
    cin>>n;
    memset(a, 0, 1001);
    for (int i = 0; i<n;i++){
        int x;
        cin>>x;
        a[x] = x;
        if (x < min && x > 0) min=x;
        if (x > max && x > 0) max=x;
    }
    for (int i = min; i<=max;i++){
        if (a[i]!=0 && a[i+1]== 0){
            cout<<i+1;
            break;
        }
    }
    if (min == -max) cout<<1;
}