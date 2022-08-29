#include<iostream>
#include<math.h>
using namespace std;
class Solution{
	public : 
		inline void FIO()
		{cin.tie(0) -> ios::sync_with_stdio(false);}
	private :
	//declare variable;
	int n, m, ans, tmp1, tmp2;
	public :
	//handle
		void input(){
			cin>>n>>m;
		}
		void solve();
		void output(){
			cout<<tmp2*tmp1 + m*tmp1*tmp1;
		}
};
void Solution::solve(){
	tmp1 = ceil(1.0*n/3);
	tmp2 = tmp1*(tmp1+1)/2;
}
main(){
	Solution sol;
	sol.FIO();
	sol.input();
	sol.solve();
	sol.output();
}