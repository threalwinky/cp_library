#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> a, b;
int main(){
	int n, m, k;
	cin>>n>>m>>k;
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		a.push_back(x);
	}
	for (int i = 0; i<m; i++){
		int x; cin>>x;
		b.push_back(x);
	}
	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end(), greater<int>());
	int i = 0; j = 1; k = 2;
	
	
}