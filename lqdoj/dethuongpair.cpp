#include<bits/stdc++.h>
using namespace std;

int a[100009];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int m, ans1 = -1000000, ans2 = 1, ans3;
    cin >> m;
    for (int i=2; i<=n; i++){
        int x;
        cin >> x;
        if (x - m > ans1){
            ans1 = x - m;
            ans3 = i;
        }
        if (x < m){
            m = x;
            ans2 = i;
        }
    }
    cout << ans2 << " " << ans3 << "\n";
    cout << ans1;
}