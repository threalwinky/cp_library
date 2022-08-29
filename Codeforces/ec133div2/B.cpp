#include<iostream>
using namespace std;
void print_arr(int a[], int n){
	for (int i = 1; i<=n; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while (T--){
	int a[200], n;
	cin>>n;
	for (int i = 1; i<=n; i++){
		a[i] = i;
	}
	cout<<n<<"\n";
	for (int i = 1; i<=n; i++){
		print_arr(a, n);
		swap(a[i], a[n]);
	}
	}
}