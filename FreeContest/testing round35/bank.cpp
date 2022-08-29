#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v{1,2,5,10,20,50,100,200,500,1000,2000,5000,10000,20000,50000};


int main()
{
    
	int x; cin>>x;
	v.push_back(x);
	sort(v.begin(), v.end());
    while (cin>>x){
		int ans = 1000000;
		for (int i = 15; i>=0;i--){
			int tmp = i, y = x, ans2 = 0;
			while (tmp != -1){
				ans2 += y/v[tmp];
				y%=v[tmp];
				tmp--;
			}
			ans = min(ans2, ans);
		}
		cout<<ans<<" ";
	}
}