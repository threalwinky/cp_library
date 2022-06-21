#include<bits/stdc++.h>
using namespace std;
bool checknt(int n){
	if (n < 2) return false;
	else if (n == 2) return true;
	else
	for (int i = 2;i<n; i++) {
	if (n%i==0) return false;
	}
	return true;
};
bool checksnt(int n){
	while (n!=0){
		if (checknt(n) != 1) return 0;
		n/=10;
	};return 1;
}
int main(){
	int n, temp = 0;
	cin>>n;
	//cout<<checknt(n);
	for (int i = 2; i<=n; i++){
		if (checksnt(i) == 1){
		cout<<i<<" ";
		for (int j =1; j <=1;j++) {
			temp = 1;
			break;
		}
	}
	}
	if (temp == 0) cout<<-1;
}
