#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int>::iterator it;
    
    int n, k;
    cin>>n>>k;
    
    for (int i = 0; i<n; i++){int x; cin>>x; v.push_back(x);}
    
    
    
    for (int i = 0; i<k ;i++){
        it = (v.begin())-1+(n+1)/2;
        cout<<*it<<" ";
        v.erase(it);
        n--;
    }
}