#include<bits/stdc++.h>
using namespace std;
int m,n,z,temp = 0, a[1001], b[1001];
void inp(){
    cin>>m>>n>>z;
    for (int i = 1; i<=m*n;i++){
        cin>>a[i];
        if (i%n==z){
            b[temp] = a[i];
            temp++;
        }
    }
}
void out(){
    sort(b,b+temp);
    temp = 0;

    for (int i = 1; i<=m*n ;i++) 
        if (i%n==z){
            a[i] = b[temp];
            temp++;
    };
    temp = 1;
    for (int i = 1; i<=m; i++) {
        for (int j = 1; j<=n;j++){
            cout<<a[temp]<<" ";
            temp++;
        }
        cout<<endl;
    }
}
int main(){
    freopen("mt05.inp", "r", stdin);
    inp();
    out();
}