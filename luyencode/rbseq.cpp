#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        v.push_back("0");
        string s;
        cin>>s;
        v[0] = s;
        for (auto x:v){
            cout<<x;
        }
        cout<<"\n";
    }
}
