#include<bits/stdc++.h>
using namespace std;
int arr[10][10], n = 3, ans = 1e9;
void sol(int a, int b, int c){
	int tmp = 0;
	for (int i = 0; i<n; i++){
		for (int j = 0; j <n; j++){
			tmp += arr[i][j];
		}
	}
	tmp = tmp - arr[0][a] - arr[1][b] - arr[2][c];
	ans = min(tmp, ans);
}
int main(){
	freopen("PHANLOAI.INP", "r", stdin);
	freopen("PHANLOAI.OUT", "w", stdout);
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	sol(0, 1, 2);
	sol(0, 2, 1);
	sol(1, 2, 0);
	sol(1, 0, 2);
	sol(2, 0, 1);
	sol(2, 1, 0);
	cout<<ans;
}