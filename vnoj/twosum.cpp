#include<iostream>
using namespace std;
int main(){
	int n, a[10001]; cin>>n;
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
	int ans = 0;

	for (int i =0; i < n - 1; i++){
		int j = i, k = i+1;
		int l = a[j], r = a[k];
		while (true){

			if (l < r){
				j --;
				if (j < 0) break;
				l += a[j];
			}
			else if (l > r){
				k ++;
				if (k >= n) break;
				r += a[k];
			}
			if (l == r){
				ans = max(ans, k -j +1);
				j--;
				k++;
				l+=a[j];
				r+=a[k];
			}
			
		}
	}
	cout<<ans;
}