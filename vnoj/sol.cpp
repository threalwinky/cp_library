#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--){
		string s; int n = 0, k;
		cin>>s>>k;
		if (k == 1) cout<<"Yes";
		else if (k == 2){
			int x = s[s.length() - 1] - '0';
			if (x & 1) cout<<"No";
			else cout<<"Yes";
		}
		else{
			for (int i = 0; i<s.length(); i++){
				n += s[i] - '0';
			}
			if (n % 3 == 0 && (s[s.length() - 1] - '0') % 2==0) cout<<"Yes";
			else cout<<"No";
		}
		cout<<"\n";
	}
}