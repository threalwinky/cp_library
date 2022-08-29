#include<iostream>
using namespace std;
class Solution{
	public : 
		inline void FIO()
		{cin.tie(0) -> ios::sync_with_stdio(false);}
	private :
	//declare variable;
	int x,A,B,T;
	double alp = 0.358;
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
		cin>>x>>A>>B;
		double ans = x*(9.8 * alp - ((double)B*B/A));
		printf("%.4f\n", ans);
	}
}
main(){
	Solution sol;
	sol.FIO();
	sol.input();
	sol.solve();
	sol.output();
}