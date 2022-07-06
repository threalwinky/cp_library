#include<bits/stdc++.h>
using namespace std;
#define NMAX 1000001
#define FASTINPUT(); ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);\
typedef long long ll;
typedef unsigned long long ull;
int n, a[NMAX], l ,r, ans[NMAX];
void inp(){
	memset(a,0 ,NMAX);
	memset(ans,0 ,NMAX);
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
	cin>>l>>r;
}
void fill(){
	ans[1] = 1;
	for (int i = 0; i<n; i++){
		int j = 0;
		while (pow(a[i],j)<r){
			ans[(int)pow(a[i],j)]++;
			j++;
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = a[i]; j<=r; j+=a[i]){
			ans[j]++;
		}
	}
}
void out(){
	fill();
	bool check = 0;
	for (int i = l; i<=r; i++){
		if (ans[i]>1) {
			cout<<i;
			ans[i]  = 0;
			check = 1;
			break;
		}
	}
	for (int i = l; i<=r; i++){
		if (ans[i]>1) cout<<','<<i;
	}
	if (check == 0) cout<<"none";
	cout<<endl;

}
int main(){
	FASTINPUT();
    while (true){
    cin>>n;
    if (n==0) break;
    inp();
    out();
    }
}