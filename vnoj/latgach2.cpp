#include<bits/stdc++.h>
using namespace std;

int F[1001];

int main(){
    F[1] = 1;
    F[2] = 2;
    int n = 3;
    int m = n + 2;
    for (int i=3; i<=4*n; i++){
        if (i % n == 0 && i != 3) F[i] = F[i-1] + F[i-3];
        else F[i] = F[i-1] + F[i-2];
    }
    cout << F[4*n];
}