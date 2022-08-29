#include<iostream>
using namespace std;
int main(int argc, char **argv){
	long long n, total = 0; cin>>n;
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		if (i&1) total += x;
	}
	cout<<total;
}