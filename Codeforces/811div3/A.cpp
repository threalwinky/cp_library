#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ans(int a){
	return (a<0)?-a:a;
}
int main(){
	int dem; cin>>dem;
	while (dem--){
	vector<int> v;
	int n, H, M, T;
	cin>>n>>H>>M;
	T = H*60+M;
	for (int i = 0; i<n;i++){
		int h, m;
		cin>>h>>m;
		int tmp = h*60+m;
		if (tmp < T) tmp += 1440;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	T = ans(v[0] - T);
	cout<<T/60<<" "<<T%60<<endl;
	}
}