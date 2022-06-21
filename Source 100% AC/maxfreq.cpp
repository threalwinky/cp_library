#include<bits/stdc++.h>
using namespace std;
int a[100001], b[100001], n, maxx = -1000, nmaxx = -1000;
void inp(){
	memset(a, 0, 1001);
	cin>>n;
	for (int i = 0; i < n; i++){
		cin>>b[i];
		a[b[i]]++;
	}
}
void out(){
	for (int i = 0; i<n ;i++){
		if (a[b[i]] > maxx){
			maxx = a[b[i]];
			nmaxx = b[i];
		}
	}
	cout<<nmaxx<<" "<<maxx;
}
int main(){
	freopen("maxfreq.inp", "r", stdin);
	inp();
	out();
}