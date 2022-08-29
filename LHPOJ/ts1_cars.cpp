#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX = 1e6;
struct car{
	int a, b, c;
	car(int x, int y, int z){
		a = x;
		b = y;
		c = z;
	}
};
vector<car> v;
bool cmp (int x, int y){
	x--; y--;
	if (v[x].a == v[y].a)
	{
		if (v[x].b == v[y].b)
		{
			return v[x].c > v[y].c;
		}
		return v[x].b > v[y].b;
	}
	return v[x].a > v[y].a;
}
int a[MAX];
int main(){
	int n; cin>>n;
	for (int i = 1; i<=n; i++){
		int x, y, z;
		cin>>x>>y>>z;
		v.emplace_back(x, y, z);
		a[i] = i;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++){
		cout<<a[i]<<" ";
	}
}