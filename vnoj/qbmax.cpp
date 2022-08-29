#include<bits/stdc++.h>
using namespace std;
#define NMAX 1001
#define INTMIN INT_MIN
typedef long long ll;
typedef unsigned long long ull;
int m, n, a[NMAX][NMAX], b[NMAX][NMAX];
void inp(){
	cin>>m>>n;
	for (int i = 0; i < NMAX ; i++){
		a[i][0] = INTMIN;
		a[0][i] = INTMIN;
		a[i+1][n+1] = INTMIN;
		a[m+1][i+1] = INTMIN;
		b[i][0] = INTMIN;
		b[0][i] = INTMIN;
		b[i+1][n+1] = INTMIN;
		b[m+1][i+1] = INTMIN;
	}
	for (int i = 1; i<=m; i++)
		for (int j = 1; j <=n ; j++)
			cin>>a[i][j];
	for (int i = 1; i <= m ; i++){
		b[i][1] = a[i][1];
	}
}
int find_max(int a, int b, int c){
	if (a>=b && a>=c) return a;
	else if (b>=c && b>=a) return b;
	else return c;
}
void out(){
	for (int i = 2; i<=n; i++){
		for (int j = 1; j<=m; j++){
			b[j][i] = find_max(b[j-1][i-1], b[j][i-1], b[j+1][i-1])+a[j][i];
		}
	}
	int maxx = INTMIN;
	for (int i = 1; i<=m; i++){
		if (b[i][n] > maxx) maxx = b[i][n];
	}
	cout<<maxx;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    inp();
    out();
}