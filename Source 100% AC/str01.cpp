#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string h;
    getline(cin,h);
    for (int i = 0; i< h.length();i++)
    if ((int)h[i]<=90 && (int)h[i]>=65)
        cout<<char((int)h[i]+32);
    else cout<<h[i];
}

/*
nang cao
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
    return 0;
}


*/
