#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
string s;
void inp(){
	cin>>s;
}
void out(){
	if (s.length()>10)
	cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
	else cout<<s<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}