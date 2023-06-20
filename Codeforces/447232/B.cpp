#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    int tmp1 = 0, tmp2 = 0;
    for (int i=1; i<=n; i++){
        int x;
        cin >> x;
        if (x & 1) tmp1++;
        else tmp2++;
    }
    cout << tmp1 * min(a, b) + tmp2 * (a + b);
}