#include<bits/stdc++.h>
using namespace std;
int main(){
    int T; cin>>T;
    while (T--){
    int n, dem = 0; cin>>n;
    map<int, int> m;
    vector<pair<int, int>> v;
    for (int i = 1; i<=n; i++){
        int x;
        cin>>x;
        m.insert({x,i});
    }
    for (auto x:m){
        dem++;
        v.push_back({x.first, x.second});
    }
    if (v.size() < 3) cout<<"Khong the tim duoc!";
    else
    cout<<v[dem-3].first<<" "<<v[dem-3].second;
        cout<<endl;
    }
}