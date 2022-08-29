#include<bits/stdc++.h>
using namespace std;
#define NMAX 1005
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
int n,m, a[NMAX][NMAX];
void inp(){
	cin>>m>>n;
	for (int i = 1; i<=m; i++){
		for (int j = 1; j<=n; j++) cin>>a[i][j];
	}
}
void loang(int x, int y){
	cout<<a[x][y]<<" ";
	a[x][y] = 0;
	if (a[x-1][y] == 0 && a[x][y+1] != 0) loang(x, y+1);
	if (a[x+1][y] != 0) loang(x+1, y);
	if (a[x][y-1] != 0) loang(x, y-1);
	if (a[x-1][y] != 0) loang(x-1, y);
}
void out(){
	loang(1, 1);

}
int main(){
    FASTINPUT();
    inp();
    out();
}