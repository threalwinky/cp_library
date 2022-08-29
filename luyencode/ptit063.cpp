#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    cout<<floor(sqrt(m-1)) - ceil(sqrt(n+1)) + 1;
}