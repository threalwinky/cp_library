#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    if (n>m){
        for (int i = 0; i<n; i++) cout<<m;
    }
    else for (int i = 0; i<m; i++) cout<<n;
}