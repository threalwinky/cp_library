#include<iostream>
#include<map>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int T; cin>>T;
	while (T--){
		map<char, int> m;
		int n, total = 0; cin>>n;
		string s; cin>>s;
		for (int i = 0; i<n; i++){
			if (m[s[i]] > 0) total +=1;
			else {
				total += 2;
				m[s[i]] ++;
			}
		}
		cout<<total<<"\n";
	}
}