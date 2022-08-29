#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int, int>> v;
    int n, dis[10001]; cin>>n;
    for (int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    for (int i = 0; i<n; i++){
        for (int j = i+1; j <n; j++){
            int dist = abs(v[i].first-v[j].first) + abs(v[i].second - v[j].second);
            if (dist > dis[i]) dis[i] = dist;
        }
    }
    sort(dis, dis + n);
    cout<<dis[n-1];
}