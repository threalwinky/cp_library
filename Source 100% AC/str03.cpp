#include <bits/stdc++.h>
using namespace std;

// K1ethoang 12:53AM 23/10/2021

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }

    int n = 0;
    cin >> n;
    while (n--)
    {
        char x;
        int dem = 0;
        cin >> x;
        if (x >= 'A' && x <= 'Z')
        {
            x += 32;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (x == s[i])
            {
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}
