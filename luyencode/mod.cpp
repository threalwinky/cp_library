#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
string s = "000";
void inp(){
	string so;
	cin>>so;
	s += so;
}
void out(){
	cout<<s[s.length()-3]<<s[s.length()-2]<<s[s.length()-1];
}
int main(){
    freopen("mod.inp", "r", stdin);
    inp();
    out();
}

/*  **PRO CODE
int main()
{
	string s;
	cin >> s;
	if(s[0] == '-')
		s.erase(0, 1);
	int n = s.size();
	if(n < 3)
		std::cout << std::setw(3) << std::setfill('0') << s;
	else
		std::cout << s.substr(n - 3);

	return 0;
	
}
*/