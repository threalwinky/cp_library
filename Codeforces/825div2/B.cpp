#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while (T--){
        int n;
        vector<int> v;
        bool flag = 0;
        cin>>n;
        for (int i = 0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        if (n <= 2) cout<<"YES\n";
        else{
            for (int i = 0; i<n - 1; i++){
                if (__gcd(v[i], v[i + 1]) < v[i]) flag = 1;
 
            }
            if (flag) cout<<"NO";
            else cout<<"YES";
            cout<<"\n";
        }
        
    }
 
}
