#pragma GCC               optimize("Ofast,unroll-loops,inline")
#pragma GCC               target("bmi,bmi2,lzcnt,popcnt")
#pragma GCC               target("movbe")
#pragma GCC               target("aes,pclmul,rdrnd")
#pragma GCC               target("avx,avx2,f16c,fma,sse,sse2,sse3,ssse3,sse4,sse4.1,sse4.2,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 1e6 + 9;
int a[maxN], F[maxN];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("sample.inp", "r", stdin);
    deque<int> dq;
    dq.push_back(0);

    int n, k;
    cin >> n >> k;
    for (int i=1; i<=n; i++) cin >> a[i];
 
    int ans = 0;
    for (int i=1; i<=n; i++){
        F[i] = max(F[dq.front()], 0LL) + a[i];
        if (dq.front() <= i - k) dq.pop_front();
        while (!dq.empty() && F[i] > F[dq.back()])
            dq.pop_back();
        dq.push_back(i);
        ans = max(ans, F[i]);
    }
    cout << ans;
}