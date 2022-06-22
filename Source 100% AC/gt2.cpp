#include <bits/stdc++.h>
using namespace std;
char gt[100000];
int m,n,a = 0,b = 0, len = 1;
void factorialNumber(int x){
	len = 1;
	memset(gt, '0',100000);
	gt[0] = '1';
	int i,j,temp = 0;
	for (i = 2; i<=x; i++)
	{
		for (j = 0; j<len || temp != 0; j++)
		{
			temp += (gt[j] - '0') * i;
			gt[j] = temp%10 + '0';
			temp /= 10;
		}
		len = j;
	}
}
void out(){
	for (int i = len - 1; i>=0; i--) cout<<gt[i];
}
int main(){
	int T; cin>>T;
	while (T--){
	int n; cin>>n;
	factorialNumber(n);

	out();cout<<endl;
	}
	return 0;
}