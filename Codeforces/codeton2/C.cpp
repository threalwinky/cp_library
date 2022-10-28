#include <bits/stdc++.h>
#define t 1000000007
using namespace std;
int n, ans = 0;
string a;

int main()
{
	cin>>a;
    for (int i = 0; i <a.length(); i++)
    {
		map<char, int> m;
        for (int j = i; j < a.length(); j++)
        {
			m[j]++;
			int le = 0;
			for (auto x:m){
				if (x.second & 1) le++;
			}
			if (le & 1) ans++;
				
		}
		
    }
    cout << ans;
}