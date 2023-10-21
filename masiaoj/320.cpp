#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("320.inp", "r", stdin);
    int n, q;
    cin >> n >> q;
    vector<ll> p1(n + 9), p2(n + 9);
    for (int i=1; i<=n; i++){
        ll x;
        cin >> x;
        p1[i] = p1[i-1] + x;
        p2[i] = p2[i-1] + x * i;
//        cout << p1[i] << " " << p2[i] << "\n";
    }
    while (q--){
        int l, r;
        cin >> l >> r;
//        cout << p2[r] - p2[l-1] << "\n";
        cout << p2[r] - p2[l-1] - (p1[r] - p1[l-1])*(l-1) << "\n";
    }
}
