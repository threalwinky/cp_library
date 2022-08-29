#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<long long, long long> m;
    cin>>n;
	while (n--){
        long long x, k;
        cin>>x>>k;
        m[x]+=k;
    }
    int k; cin>>k;
    for (auto x:m){
        if (k - x.second > 0) k-=x.second;
        else{
            cout<<x.first;
        	break;
        }
    }
    
}