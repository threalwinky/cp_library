#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, p;
    cin >> n >> p;
    long long tmp1 = 1, tmp2 = n;
    if (p - tmp1 > tmp2 - p){
        cout << (tmp2 - p + 1)/2;
    }
    else cout << (p - tmp1 + 1)/2;
} 