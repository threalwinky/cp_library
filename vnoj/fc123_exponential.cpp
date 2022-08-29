#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int LowerDive(vector<int> v, int k){
	int l = 0, r = v.size() - 1;
	while (l <= r){
		int m = l + (r - l)/2;
		if (v[m] == k) return v[m];
		if (v[m] < k) l = m+1;
		else r = m-1;
	}
	return v[r];
}
class Solution{
	public : 
		inline void FIO()
		{cin.tie(0) -> ios::sync_with_stdio(false);}
	private :
	//declare variable;
	int n;
	vector<int> v;
	public :
	//handle
		void input(){
			cin>>n;
		}
		void solve();
		void output(){
			cout<<LowerDive(v, n);
		}
};
void Solution::solve(){
	for (int i = 2; i<=n; i++){
		for (int j = 2; j<=n; j++){
				v.push_back(pow(i, j));
			if (pow(i, j) > n) break;
		}
	}
	sort(v.begin(), v.end());
}
main(){
	Solution sol;
	sol.FIO();
	sol.input();
	sol.solve();
	sol.output();
}