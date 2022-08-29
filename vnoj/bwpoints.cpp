#include<iostream>
#include<vector>
using namespace std;
pair<int, int> tmp[100001];
void MrgSort(vector<pair<int, int>> &v, int l, int r){
    if (l < r){
        int m = l + (r - l) / 2;
        MrgSort(v, l, m);
        MrgSort(v, m + 1, r);
        int i = l, j = m + 1, k = 0;
        while (i <= m || j <= r)
            if ((v[i].first < v[j].first && i <= m && j <= r) || (j > r))
                tmp[k++] = v[i++];
            else
                tmp[k++] = v[j++];
        for (int i = 0; i < k; i++)
            v[i + l] = tmp[i];
    }
}
vector<pair<int, int>> v;
int ans = 0;
int main(){
	int n;
	cin>>n;
	for (int i = 0; i<n; i++){
		int x;
		cin>>x;
		v.push_back({x, -1});
	}
	for (int i = 0; i<n; i++){
		int x;
		cin>>x;
		v.push_back({x, 1});
	}
	MrgSort(v, 0, v.size() - 1);
	int s = 0;
	for(int i=0;i<2*n;i++)
    {
        if(s==0)s+=v[i].second;
        if(s==1&&v[i].second==-1)s=0,ans++;
        if(s==-1&&v[i].second==1)s=0,ans++;
    }
    cout<<ans;
}