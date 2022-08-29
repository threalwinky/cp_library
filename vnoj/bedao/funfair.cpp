#include<iostream>
using namespace std;
#define ll long long
const long long MAX = 1e18;
int a[1000001];
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;
	int x, y; cin>>x>>y;
	for (int i = 1;i<=n; i++){
		cin>>a[i];
	}
	long long i = 1, j = 1, m = MAX, ans = 0, sum = 0, ansl, ansr;
	while (i <= n || j <= n){
		if (j > n){
			sum -= a[i];
			if (sum > ans){
				ans = max(ans, sum);
				ansl = i;
				ansr = n;
			}
			i++;
		}
		else{
		if (a[j] < m){
			if (a[j] <= y && a[j] >= x){
				sum += a[j];
				m = a[j];
				if (sum > ans){
				ans = max(ans, sum);
				ansl = i;
				ansr = j;
				}
			}
			else{ i = j + 1; j = i - 1; sum = 0;m = MAX;}
			j++;
		}
		else {
			sum += a[j];
			if (sum > ans){
				ans = max(ans, sum);
				ansl = i;
				ansr = j;
			}
			j++;
		}
		}
	}
	cout<<ans<<"\n"<<ansl<<" "<<ansr;
}