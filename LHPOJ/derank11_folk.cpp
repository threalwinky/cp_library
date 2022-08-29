#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
string format(double d){
	string s = to_string(d);
	string tmp;
	bool flag = 0;
	for (int i = 7; i>=2; i--){
		if (s[i] != '0'){
			flag = 1;
		} 
		if (flag) 
			tmp = s[i] + tmp;
	}
	if (tmp.length() != 0) tmp =  s[1] + tmp;
	tmp =  s[0] + tmp;
	return tmp;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--){
		int type, a, b;
		cin>>type>>a>>b;
		double alp = (a+b)*M_PI/180;
		if (type == 1) cout<<format(sin(alp));
		else if (type == 2) cout<<format(cos(alp));
		else cout<<fixed<<format(tan(alp));
		cout<<"\n";
	}
}