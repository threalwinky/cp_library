#include<iostream>
using namespace std;
int main(){
	int x = 0, n; cin>>n;
	cin.ignore();
	while (n--){
		string s;
		getline(cin, s);
		if (s == "X++") x++;
		if (s == "++X") ++x;
		if (s == "X--") x--;
		if (s == "--X") --x;
	}
	cout<<x;
}