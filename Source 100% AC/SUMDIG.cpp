#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, sum;cin>>n;string s[n],temp; getline(cin,temp);
	for (int j = 0; j<n; j++){
		getline(cin,s[j]);
	}
	for (int j = 0; j<n; j++){
	sum = 0;
	for (int i = 0; i<s[j].length();i++){
		sum += s[j][i] - 48;
		
		}cout<<sum<<endl;
	}
}
