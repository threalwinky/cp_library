#include<iostream>
#include<string>
using namespace std;
string fill(int m){
	string tmp;
	for (int i = 0; i<m;i++){
		tmp += 'B';
	}
	return tmp;
}
int n,m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int T; cin>>T;
	while (T--){
	cin>>n>>m;

	string s = fill(m);
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		int minx = min(x - 1, m - x);
		int maxx = max(x - 1, m - x);
		if (s[minx] != 'A') s[minx] = 'A';
		else if (s[maxx] != 'A') s[maxx] = 'A';
	}
	cout<<s<<endl;
	}
}