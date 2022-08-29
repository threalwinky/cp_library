#include<iostream>
using namespace std;
int a[100003], n,m;
int main(){
	cin>>n>>m;
	for (int i = 1; i<=n; i++){
		cin>>a[i];
	}
	for (int i = 1; i<=m; i++){

		int l, r, dem = 0;
		cin>>l>>r;
		if (l < r){
			for (int j = l; j<r; j++){
				if (a[j] > a[j + 1]) dem += a[j] - a[j+1];
			}
		}
		else {
			for (int j = l; j>r; j--){

				
				if (a[j] > a[j - 1]) dem += a[j] - a[j-1];
			}
		}
		cout<<dem<<endl;
	}

}