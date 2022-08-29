#include<iostream>
using namespace std;
string check(string s){
	if (s.length() == 3 && (s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's'))
		return "YES";
	return "NO";
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int n;
	cin>>n;
	cin.ignore();
	for (int i = 0; i<n; i++){
		string s;
		getline(cin, s);
		cout<<check(s)<<"\n";
	}
}