#include<bits/stdc++.h>
using namespace std;
bool snt[1000001];int n;
void inp(){
    cin>>n;
    for (int i = 2; i <= sqrt(n) ;i++){
        if (!snt[i]) 
            for (int j = 2*i; j<=n; j+=i){
                snt[j] = 1;
            }
    }
}
void out(){
    for (int i = 2; i<=n; i++)
        if (!snt[i])
            cout<<i<<" ";
}
int main(){
    freopen("SANGNT.inp", "r", stdin);
    inp();
    out();
} 