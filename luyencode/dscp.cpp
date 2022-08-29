#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1;
    
    return 0;
}