#include<bits/stdc++.h>
using namespace std;
#define N 100000
int a[N],n,temp,temp1 = 0;
void inp(){
    cin>>n;
    for (int i = 0; i<n; i++){
        cin>>a[i];
    }
}
void xuly(int i){
    temp1++;
    if (a[i] < temp)
    temp = a[i]+1;
    temp--;
    if (temp!=0&&a[i+1]!=0)
    xuly(i+1);
}
void out(){
    sort(a,a+n,greater<int>());
    // 5 4 3 2 1
    temp = a[0];
    xuly(0);
    cout<<temp1;
}
int main(){
    freopen("chongach.inp", "r", stdin);
    inp();
    out();
}