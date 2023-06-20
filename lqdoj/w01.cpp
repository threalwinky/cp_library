#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x;
    cin >> x;
    long long ans = 0;
    while (x != 0){
        ans += x;
        cin >> x;
    }
    cout << ans;
}