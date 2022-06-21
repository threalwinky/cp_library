#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,temp; cin>>n;
	string s[1000];
	for (int i = 0; i<= n ;i++)
		getline(cin,s[i]);
		
	for (int i = 1; i<= n ;i++){
		temp = 0;
		for (int j =0; j<s[i].length(); j++){
		if (s[i][j] == (char)32) {
			temp++;
			while (s[i][j+1]==(char)32) j+=1;	
		}
	}
	cout<<temp<<endl;
 	}
}
