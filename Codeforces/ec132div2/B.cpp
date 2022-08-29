#include<iostream>
#include<string>
#include<cstring>
#define MOD 1000000007
using namespace std;
string s;
void inp(){
	cin>>s;
}

long long comp(){
	int dem = 0;
	int slen = s.length() - 1;
	if (s[0] == ')' || s[slen] == '(') return 1;
	if (s[0] == '?' && s[slen] == '(') return 1;
	if (s[0] == ')' && s[slen] == '?') return 1;
	for (int i = 1; i <s.length()/2; i++){
		if (s[i] == '?' || s[slen - i] == '?') dem++;
		if (dem > 1) return 0;
	}
	return 1;
}

void out(){
	int ans;
	ans = comp();
	if (ans == 1) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
int main(){
	int T; cin>>T;
	while (T--){
	inp();
	out();
	}
}