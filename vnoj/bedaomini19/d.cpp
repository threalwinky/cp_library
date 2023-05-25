#include<bits/stdc++.h>
using namespace std;
long long ans = 0;
map<string , int> m;
void sol(string s, int k, int tmp){
    if (tmp == 0 && m[s]==0){
        m[s]++;
        int tmp1 = 0;
        for (int i = 0; i<s.length(); i++){
            if (s[i] == '0'){
                tmp1 = 0;
            }
            else{
                if (s[i]=='1'){
                    tmp1++;
                    if (tmp1 >= k) ans++;
                }
            }
        }
        return;
    }
    for (int i=0; i<s.length(); i++){
        if (s[i] == '?'){
            s[i] = '0';
            tmp--;
            sol(s, k, tmp);
            s[i] = '1';
            sol(s, k, tmp);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int tmp = 0;
    for (int i = 0; i<s.length(); i++) if (s[i] == '?') tmp++;
    sol(s, k, tmp);
    cout<<ans;
}
