#include<iostream>
using namespace std;
class Solution{
	public : 
		inline void FIO()
		{cin.tie(0) -> ios::sync_with_stdio(false);}
	private :
		int a, b, c;
	public :
		void input(int x, int y,int z){
			a = x;
			b = y;
			c = z;
		}
		int x, y, z;
		void solve();
		void output(){
			cout<<x<<" "<<y<<" "<<z<<"\n";
		}
};
void Solution::solve(){
	x = a+b+c;
	y = b+c;
	z = c;
}
int main(){
	Solution sol;
	sol.FIO();
	int T; cin>>T;
	while (T --> 0){
		int a, b, c;
		cin>>a>>b>>c;
		sol.input(a, b, c);
		sol.solve();
		sol.output();
	}
}