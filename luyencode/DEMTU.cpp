#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n = 1,temp; 
	string s;
	getline(cin,s);
		
	temp = 0;
	for (int i =0; i<s.length(); i++){
		if ((s[i] != ' ' && s[i + 1] == ' ') || (s[i] != ' '&& i == s.size() - 1)) temp++;
	}
	cout<<temp<<endl;
 	
}
