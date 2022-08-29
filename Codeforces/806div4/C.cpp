#include<iostream>
#include<vector>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T; cin>>T;
	while (T--){
	vector<int> v;
	int n; cin>>n;
	for (int i = 0; i<n; i++){
		int x; cin>>x; v.push_back(x);
	}
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		string s;cin>>s;
		for (int j = 0; j<x; j++){
			if (s[j] == 'D'){
				if (v[i] == 9){
					v[i] = 0;
				}
				else
				v[i]++;
			}
			else{
				if (v[i] == 0){
					v[i] = 9;
				}
				else v[i] --;
			}
		}
	}
	for (auto x:v) cout<<x<<" ";
	cout<<endl;
	}
}