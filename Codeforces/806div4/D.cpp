#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	int T;cin>>T;
	while (T--){
	int n; cin>>n;
	vector<string> v;
	map<string, int> m;
	for (int i = 0; i<n; i++){
		string s;
		cin>>s;
		v.push_back(s);
		m[s] ++;
	}
	for (auto x:v){
		bool check = 0;
		int j = 0, k = 1;
		string sbefore, safter = x.substr(k, x.length());
		sbefore = x[j];
		while (k < x.length()){
			if (m[sbefore] > 0 && m[safter] > 0){
				check = 1;
				break;
			}
			j++;
			k++;
			sbefore += x[j];
			safter = x.substr(k, x.length());
		}
		if (check) cout<<1;
		else cout<<0;
	}
	cout<<endl;
	}
}