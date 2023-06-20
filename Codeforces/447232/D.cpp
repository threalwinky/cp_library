#include<bits/stdc++.h>
using namespace std;
const int N = 2000001;
int era[N];

void sol(){
    for (int i=2; i<=N; i++){
        if (era[i] == 0)
        for (int j=i; j<=N; j+=i){
            if (era[j] == 0) era[j] = i;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    sol();
    vector<int> ans(k + 1);
    for (int i=2; i<=k; i++){
        ans[era[i]]++;
    }
    while (n--)
    {
        int x;
        cin >> x;
        cout << ans[x] << "\n";
    }
    
}