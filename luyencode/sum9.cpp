#include<bits/stdc++.h>
using namespace std;
int fibo[100], temp, n;
void out(){
    fibo[0] = 1;
    fibo[1] = 1;
    for (int i = 2; i<12; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cout<<fixed<<setprecision(5)<<(double)fibo[temp]/fibo[temp+1];
}
void inp(){
    cin>>n;
    for (int i = 0; i<n ; i++){
        cin>>temp;
        out();
        cout<<endl;
    }
}
int main(){
    freopen("sum9.inp", "r", stdin);
    inp();
}