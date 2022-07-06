#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
string s;
ull k;
void inp(){
    cin.ignore();
	getline(cin, s);
	cin>>k;
}
bool check(){
	string srev;
	for (int i = s.length()-1; i>=0; i--)
		srev+=s[i];
	int dem = 0;
	for (int i = 0 ;i<s.length(); i++){
		if (s[i] == srev[i]) dem++;
	}
	if (dem == s.length()) return true;
	return false;
}
void out(){
	if (check()) cout<<"YES";
	else cout<<"NO";
	cout<<'\n';
}
int main(){
    FASTINPUT();
   	int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}