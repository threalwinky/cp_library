#include<bits/stdc++.h>
using namespace std;
string s;
int so[10], chu[26];
void inp(){
    getline(cin,s);
}
void out(){
    for (int i = 0; i<s.length(); i++){
        if (s[i] >= 'A' && s[i] <='Z')
            chu[s[i] - 'A']++;
        if (s[i]>= 'a' && s[i] <=122)
            chu[s[i] - 'a']++;
        if (s[i] >= '0' && s[i] <='9')
            so[s[i] - '0']++;
    }
    for (int i = 0; i<10;i++){
        if (so[i]!=0){
        cout<<i<<" "<<so[i];
        cout<<endl;
        }
    }
    for (int i = 0; i<27;i++){
        if (chu[i]!=0){
        cout<<(char)(i+97)<<" "<<chu[i];
        cout<<endl;
        }
    }
}
int main(){
    freopen("str04.inp", "r", stdin);
    inp();
    out();
}
