#include<iostream>
#include<algorithm>
using namespace std;
pair<int, int> arr[101];
pair<int, int> drr[101];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	for (int i = 0; i<n; i++){
		cin>>arr[i + 1].first;
	}
	sort(arr + 1, arr + n + 1);
	for (int i = 0; i<n*(n-1); i++){
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		if (c != d){
			if (c < d)arr[b].second+=3;
			else arr[a].second+=3;
			drr[a].second += c - d;
			drr[b].second += d - c;
		}
		else{
			arr[a].second++;
			arr[b].second++;
		}
	}
	int best = arr[n].second, best1 = drr[n].second;
	for (int i = 1;i <=n;i++){
		best = max(best, arr[i].second);
		best1 = max(best1, drr[i].second);
	}
	
	for (int i = n; i>=1; i--){
		if (arr[i].second == best && drr[i].second == best1)
			cout<<arr[i].first<<" ";
	}
	
}