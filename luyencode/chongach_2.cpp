#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("chongach.inp", "r", stdin);
    int n, toida, j = 1;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    toida = min(n - 1, a[0]);
    while(toida > 0)
    {
        int i = 1;
        toida = min(toida - i, a[i]);
        j++; i++;
    }
    if(j == 99999)
        cout<<j+1;
    else
        cout<<j;
}