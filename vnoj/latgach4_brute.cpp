#include<bits/stdc++.h>
using namespace std;
const int mod = 111539786;
int F[100001];
int main(){
    F[2] = F[1] = 1;
    for (int i = 3; i<60; i++){
        F[i] = (F[i-1]%mod + F[i-2]%mod)%mod;
        //cout << F[i] << " ";
    }
    cout << F[40];
}