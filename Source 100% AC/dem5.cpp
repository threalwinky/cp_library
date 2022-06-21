#include<iostream>
using namespace std;
bool check(int n, int k){
	int s , m = n, temp = 0;
	while (n!=0){
		s = n%10;
		if (m%s == 0) temp +=1;
		if (temp >= k){
		return true;
		break;
		} 
		n/=10;	
	};
	return false;
}
int main(){
	int l,r,k,s;
	cin>>l>>r>>k;
	for (int i = l; i<=r ; i++){
		if (check(i,k) == 1) s+=1;
	};
	cout<<s;
}
