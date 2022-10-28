#include<iostream>
#include<vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin>>T;
	while (T--){
		vector<int> v;
		bool flag = 0;
		int n, k = 0, tmp = 0;
		cin>>n;
		cin>>k;
		v.push_back(k);
		for (int i = 1; i<n; i++){
			cin>>tmp;
			if (k - tmp != k + tmp && k + tmp >= 0 && k - tmp >= 0){
				flag = 1;
			}
			k = k + tmp;
			v.push_back(k);
		}
		if (flag) cout<<-1<<" ";
		else for (auto x : v) cout<<x<<" ";
		cout<<"\n";
	}
}
