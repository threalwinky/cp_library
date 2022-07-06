#include<iostream>
#include<map>
using namespace std;
main(){
    map<string, int> m;
    int n; cin>>n;cin.ignore();
    for (int i = 0; i<n; i++){string x; getline(cin, x); m[x]++;}
    cout<<m.size();
}