#include<bits/stdc++.h>
using namespace std;
pair<int, int> get(string s){
	string h, m;
	if (s[1] == ':'){
		h = s[0];
		m = s[2];
		m+= s[3];
	}
	else{
		h = s[0];
		h+= s[1];
		m = s[3];
		m+= s[4];
	}
	return {stoi(h), stoi(m)};
}
class Solution{
	public : 
		inline void FIO()
		{cin.tie(0) -> ios::sync_with_stdio(false);}
	private :
	//declare variable;
	double ans = 0;
	string s;
	public :
	//handle
		void input(string h){
			s = h;
		}
		void solve();
		void output(){
			cout<<fixed<<setprecision(3)<<ans<<"\n";
		}
};
void Solution::solve(){
	pair<int, int> p = get(s);
	int h = p.first, m = p.second;
	double hour, minute;
	minute = m * 6;
	hour = h*30 + (double)0.5*m;
	ans = abs(minute - hour);
	ans = (ans > 180) ? (360 - ans) : ans;
}
main(){
	Solution sol;
	sol.FIO();
	string s;
	while (true){
		cin>>s;
		if (s == "0:00") break;
		sol.input(s);
		sol.solve();
		sol.output();
	}
}