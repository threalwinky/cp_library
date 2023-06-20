#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 1e6 + 1000;
vector<int> F, Fp;
vector<int> P;
void era(){
    P.resize(maxN + 9, 0);
    P[0] = P[1] = 1;
    for (int i = 2; i<=maxN; i++){
        if (P[i] == 0){
            for (int j = 2 * i; j<=maxN; j+=i){
                P[j] = 1;
            }
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    era();
    for (int i=0; i<=maxN; i++){
        if (P[i] == 0) F.push_back(i);
    }
    for (int i=0; i<F.size(); i++){
        Fp.push_back(F[i]*F[i+1]);
    }
    int q;
    cin >> q;
    while (q--){
        int n;
        cin >> n;
        auto it = lower_bound(Fp.begin(), Fp.end(), n);
        if (*it > n) it--;
        cout << n - *it << "\n";
    }
}