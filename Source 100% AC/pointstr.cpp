#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
string s;
int main(){
    int n; cin>>n;
    cin>>s;
    string temp = "luyencode@";
    int cnt = 0;
    for (int i = 0; i<s.length(); i++){
        int j = 0;
        if (s[j+i] == temp[j]){
            while (s[j+i] == temp[j]){
                j++;
            }
        }
        
        if (j == 9) {
                //break;
                cnt++;    
        }
    }
    cout<<cnt;
}