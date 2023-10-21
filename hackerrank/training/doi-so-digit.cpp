#include                    <bits/stdc++.h>
using                       namespace std;
#define int               long long
#define fi                  first
#define se                  second
#define pb(x)               push_back(x)
#define endl                cout<<"\n";
typedef pair<int, int>      ii;
typedef vector<int>         vi;
typedef long double         ldb;
const string F =            "sample";
const string IF =           F + ".inp";
const string OF =           F + ".out";
const int mx =              1e9;
const ldb PI =              3.14159265358979;
const int maxN =            1e6;
const int mod  =            1e9 + 7;
void opf(bool c){           if (c == 1){
freopen(IF.c_str(),         "r", stdin);
freopen(OF.c_str(),         "w", stdout);}}
//------------------------------------------------------------------------------------
//Code here

int dec2bin(string s){
    int res = 0;
    reverse(s.begin(), s.end());
    for (int i=0; i<s.length(); i++){
        if (s[i] == '1'){
            res += pow(2, i);
        }
        if (res > mx) break;
    }
    return res;
}

int dec2tri(string s){
    int res = 0;
    reverse(s.begin(), s.end());
    for (int i=0; i<s.length(); i++){
        if (s[i] == '1'){
            res += pow(3, i);
        }
        else if (s[i] == '2'){
            res += 2*pow(3, i);
        }
        if (res > mx) break;
    }
    return res;
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(1);
    string s1, s2;
    cin >> s1 >> s2;
//    int tmp3 = dec2tri(s2);
//    cout << tmp3 << "\n";
    vector<int> v;
    for (int i=0; i<s1.length(); i++){
        string tmp1 = s1;
        tmp1[i] = '0';
        for (int j=0; j<s2.length(); j++){
            string tmp2 = s2;
            tmp2[j] = '0';
//            cout << tmp1 << " " << tmp2 << "\n";
//            cout << dec2bin(tmp1) << " " << dec2tri(tmp2) << "\n";
            if (dec2bin(tmp1) == dec2tri(tmp2) && dec2bin(tmp1) <= mx){
                v.push_back(dec2bin(tmp1));
            }
            tmp2[j] = '1';
//            cout << tmp1 << " " << tmp2 << "\n";
//            cout << dec2bin(tmp1) << " " << dec2tri(tmp2) << "\n";
            if (dec2bin(tmp1) == dec2tri(tmp2) && dec2bin(tmp1) <= mx){
                v.push_back(dec2bin(tmp1));
            }
            tmp2[j] = '2';
//            cout << tmp1 << " " << tmp2 << "\n";
//            cout << dec2bin(tmp1) << " " << dec2tri(tmp2) << "\n";
            if (dec2bin(tmp1) == dec2tri(tmp2) && dec2bin(tmp1) <= mx){
                v.push_back(dec2bin(tmp1));
            }
        }
        tmp1 = s1;
        tmp1[i] = '1';
        for (int j=0; j<s2.length(); j++){
            string tmp2 = s2;
            tmp2[j] = '0';
//            cout << tmp1 << " " << tmp2 << "\n";
//            cout << dec2bin(tmp1) << " " << dec2tri(tmp2) << "\n";
            if (dec2bin(tmp1) == dec2tri(tmp2) && dec2bin(tmp1) <= mx){
                v.push_back(dec2bin(tmp1));
            }
            tmp2[j] = '1';
//            cout << tmp1 << " " << tmp2 << "\n";
//            cout << dec2bin(tmp1) << " " << dec2tri(tmp2) << "\n";
            if (dec2bin(tmp1) == dec2tri(tmp2) && dec2bin(tmp1) <= mx){
                v.push_back(dec2bin(tmp1));
            }
            tmp2[j] = '2';
//            cout << tmp1 << " " << tmp2 << "\n";
//            cout << dec2bin(tmp1) << " " << dec2tri(tmp2) << "\n";
            if (dec2bin(tmp1) == dec2tri(tmp2) && dec2bin(tmp1) <= mx){
                v.push_back(dec2bin(tmp1));
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v[v.size()-1];
}
