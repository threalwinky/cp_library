#include <bits/stdc++.h>
using namespace std;
bool tong10(string s){
    int temp = 0;
    for (int i = 0; i<s.length(); i++){
        temp += (s[i]-'0');
    }
    if (temp == 10) return true;
    else return false;
}
bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    int temp = 0;
    string a,b;
    while (cin>>a>>b){
    while (a!=b){
        if (isPalindrome(a)&&tong10(a)){
            temp++;
        }
        a = to_string(stoi(a)+1);
    }
    if (isPalindrome(a)&&tong10(a)){
            temp++;
        }
    cout<<temp<<endl;
    }
    return 0;

}