#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;
int n, m;
long long F[100000];
pair<int, int> v[100000];
void dp(){
    for (int i = 1; i<=n; i++){
        for (int j = m; j>=v[i].first; j--){
            F[j] = max(F[j], F[j - v[i]. first] + v[i].second);
        }
    }
}
int main(){
    cin>>n>>m;
    for (int i = 1;i <=n; i++){
		cin>>v[i].fi>>v[i].se;
	}   
    dp(); 
    
    cout<<F[m];
}