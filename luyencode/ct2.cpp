#include<iostream>
#include<math.h>
using namespace std;
bool checksochinhphuong(int n){
	for (int i = 2 ;i <= sqrt(n); i++) if (i*i==n) return true;
	return false;
}
int main(){
	int i =round(10/2);
	cout<<i;
}
