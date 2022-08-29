#include<iostream>
#include<string>
using namespace std;

int main(){
    int dem = 0;
    string s;
    cin>>s;
    for (int i = 0; i<s.length(); i++){
        if (s[i] >= 48 && s[i] <=57) dem += s[i] - '0';
        else cout<<s[i];
    }
    cout<<dem;
}