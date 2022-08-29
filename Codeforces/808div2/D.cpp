#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long n,m;
vector<long long> col_val, row_val;
long long a[1001][1001];
int main(){
	cin>>n>>m;
	for (int i = 0; i<n; i++){
		col_val.push_back(0);
		for (int j = 0; j <m; j++){
			cin>>a[i][j];
			row_val.push_back(0);
			col_val[i] += a[i][j];
			row_val[j] += a[i][j];
		}
	}
	vector<long long>::iterator col_max = max_element(col_val.begin(), col_val.end());
	vector<long long>::iterator row_max = max_element(row_val.begin(), row_val.end());
	int col, row;
	for (auto it = col_val.begin(); it!=col_val.end(); it++){
		if (*it == *col_max){
			col = it - col_val.begin();
			break;
		}
	}
	for (auto it = row_val.begin(); it!=row_val.end(); it++){
		if (*it == *row_max){
			row = it - row_val.begin();
			break;
		}
	}
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			if (i != col && j != row) cout<<a[i][j]<<" ";
		}
		if (i != col)
		cout<<'\n';
	}
}