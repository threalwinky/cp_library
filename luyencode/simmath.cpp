/*#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    long long int a,b,c,sum;
    for (int x = 0; x<n;x++){
        sum = 0;
        cin>>a>>b>>c;
        for (int i = 1 ; i<=c;i++)
            for (int j = 1 ; j<= b;j++)
                for (int k = 1 ; k<= a;k++)
                    sum += i*j*k;
        cout<<sum;
    }
}*/
#include <bits/stdc++.h>
using namespace std;
#define IO freopen("INPUT.txt", "r", stdin), freopen("OUTPUT.txt", "w", stdout)
#define ll long long
#define ull unsigned long long
const ll MOD = 998244353;
int main()
{
int t;
cin >> t;
while (t--)
{
ll a, b, c;
cin >> a >> b >> c;
ll m1 = a * (a + 1) / 2, m2 = b * (b + 1) / 2, m3 = c * (c + 1) / 2;
m1 %= MOD, m2 %= MOD, m3 %= MOD;
ll res = (m1 * m2) % MOD;
res = (res * m3) % MOD;
cout << res << "\n";
}
return 0;
}
