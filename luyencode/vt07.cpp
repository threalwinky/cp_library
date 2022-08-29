#include<iostream>
using namespace std;
int main(){
	bool temp = 1;
	int arr[11];
	for (int i = 1; i<= 11; i++){
		cin>>arr[i];
	}
	for (int i = 1; i<= 10; i++){
		if (arr[i] == arr[11]) cout<<i<<" ";
        else arr[i] = -1;
	}
	for (int i = 1; i<= 10; i++){
		if (arr[i] != -1 ) {
			temp = 1;
			break;
		}else temp = 0;
	};
	if (temp == 0) cout<<-1;
}
