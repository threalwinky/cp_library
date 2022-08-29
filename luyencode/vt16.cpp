#include<bits/stdc++.h>
using namespace std;
int main(){
	int s[10000], j, a = 0;
	for (int i = 0; i<=10000;i++){
		cin>>s[i];
		if (s[i] == 0) {
		j = i;
		break;
		}
	}
	for (int i = 0; i<=j;i++){
		if (s[i]<0){
		cout<<s[i]<<" ";
		a++;
	}
	}
	if (a == 0) cout<<"NOT FOUND";
}
