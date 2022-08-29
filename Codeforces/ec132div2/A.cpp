#include<iostream>
using namespace std;
int main(){
	int T;cin>>T;
	while (T--){
	int a[4], dem = 0;
	bool flag = 0;
	cin>>a[0];
	for (int i = 1; i<=3; i++)
		cin>>a[i];
	for (int i = 1; i<=3; i++){
		if (a[a[0]] != 0) {
			dem++;
			swap(a[0], a[a[0]]);
		}
		else{
			a[a[0]] = a[0];
			break; 
		}
	}
	for (int i = 1; i<=2; i++){
		if (a[i] > a[i] + 1){
			flag = 1;
			break;
		}
	}
	if (!flag && dem == 2){
		cout<<"YES";
	}
	else cout<<"NO";
	cout<<endl;
	}
}