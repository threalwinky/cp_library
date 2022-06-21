#include <bits/stdc++.h>
using namespace std;
char gt[20000000];
int m,n, num = 0;
int lt(int x, int y){
    int a = x,b = 0;
	if (y == 0 ) return 1;
	if (y == 1 ) return n;
	for (int i = 0; i < 2000; i++)
	{
		gt[i] = '0';
	}
	while (a!=0){
	gt[b] = a%10 + '0';
	a/=10;
	b++;
	}

	int i,j,temp = 0, len = 1;
	for (i = 2; i<=y; i++)
	{
		for (j = 0; j<len || temp != 0; j++)
		{
			temp += (gt[j] - '0') * x;
			gt[j] = temp%10 + '0';
			temp /= 10;
		}
		len = j;
		num = len;
	}
	return j;
}
void nhap(){
	cin>>m>>n;
}
void xuly(){
	lt(m,n);
}
void xuat(){
	for (int i = num-1; i>=0; i--) cout<<gt[i];
}
int main(){
	nhap();
	xuly();
	xuat();
}