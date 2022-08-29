#include<iostream>
using namespace std;
bool ssc(string h, string s){
	int cur;
	for (int i = 0; i<s.length(); i++){
		if (h[0] == s[i]){
			cur = i;
			break;
		}
	}
	for (int i = 0; i<h.length(); i++){
		if (cur == s.length()) cur = 0;
		if (s[cur++] != h[i]) return 0;
	}
	return 1;
}
class Solution{
	public : 
		inline void FIO()
		{cin.tie(0) -> ios::sync_with_stdio(false);}
	private :
	//declare variable;
	string s = "CDEFGAB";
	int T;
	public :
	//handle
		void input(){
			cin>>T;
		}
		void solve();
		void output(){}
};
void Solution::solve(){
	while (T--){
		string h;
		cin>>h;
		if (ssc(h,s)) cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
}
main(){
	Solution sol;
	sol.FIO();
	sol.input();
	sol.solve();
	sol.output();
}