#include <bits/stdc++.h>
using namespace std;
char gt[10000000];
int m,n,a = 0,b = 0, len = 1;
void expo(int x, int y){
	memset(gt, '0',100000);
	gt[0] = '1';
	int i,j,temp = 0;
	for (i = 1; i<=y; i++)
	{
		for (j = 0; j<len || temp != 0; j++)
		{
			temp += (gt[j] - '0') * x;
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
	int n; cin>>n;
	int x; cin>>x;
	expo(n,x);
	out();
	return 0;
}