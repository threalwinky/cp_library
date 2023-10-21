#include                    <bits/stdc++.h>
using                       namespace std;
vector<int> f1(1000001, -1), f2(1000001, -1), p(1000001);
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    int n = s.length();
    vector<int> v;
    for (int i=0; i<s.length(); i++){
        if (s[i] == '0' || s[i] == '1'){
            cout << s[i];
            if (s[i] == '0') v.push_back(-1);
            else v.push_back(1);
        }
    }
    cout << "\n";
    for (int i=0; i<v.size(); i++){
        p[i + 1] = p[i] + v[i];

    }
    int res = -1;
    f1[0] = 0;
    f2[0] = 0;
    for (int i=1; i<=v.size(); i++){
        int ans = -1;
        if (p[i] > 0){
            if (f1[p[i]] == -1) f1[p[i]] = i;
            ans = max(ans, i - f1[p[i]]);
            if (f1[p[i]+1] != -1) ans = max(ans, i - f1[p[i]+1]);
            if (p[i]-1 >= 0 && f1[p[i]-1] != -1) ans = max(ans, i - f1[p[i]-1]);
            res = max(res, ans);
        }
        else{
            p[i] = abs(p[i]);
            if (f2[p[i]] == -1) f2[p[i]] = i;
            ans = max(ans, i - f2[p[i]]);
            if (f2[p[i]+1] != -1) ans = max(ans, i - f2[p[i]+1]);
            if (p[i]-1 >= 0 && f2[p[i]-1] != -1) ans = max(ans, i - f2[p[i]-1]);
            res = max(res, ans);
        }
    }
    cout << res;
}
