/**
 *   author: winky
 *   created: 2023-05-29 00:55:51
**/

#include                    <bits/stdc++.h>
using namespace             std;
#define tri(a, b, c)        ((a) ? (b) : (c))
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define debug(x)            cerr<<"+Debug for "<<(#x)<<" : "<<x<<"\n";
#define endl                cout<<"\n";
//#define int               long long
typedef pair<int, int>      ii;
typedef long long           ll;
const int maxN =            3e5;
const int mod =             1e9 + 7;
const int inf =             INT_MAX;
const double PI =           3.14159265358979;
const auto INP_FILE =       "sample.inp";
const auto OUT_FILE =       "sample.out";
void IO(short choice){      if (choice == 1) freopen(INP_FILE, "r", stdin);
else                        if (choice == 2){freopen(INP_FILE, "r", stdin); freopen(OUT_FILE, "w", stdout);}
else                        if (choice == 3) ios::sync_with_stdio(false);cin.tie(nullptr);}
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int m, s, s1;
    cin >> m >> s;
    s1 = s;
    if (s > 9 * m || (s < 1 && m > 1)) cout << -1 << " " << -1;
    else{
        string str;
        int i = 0;
        while (s > 0 || i < m){
            if (s >= 9){
                s-=9;
                str+='9';
            }
            else if (s == 0){
                str+='0';
            }
            else{
                str+=(char)(s + '0');
                s = 0;
            }
            i++;
        }
        s = s1;
        string str1;
        i = 0;
        while (s > 0 || i < m){
            if (s > 9){
                //cout << s << " ";
                s-=9;
                str1 = '9' + str1;
            }
            else{
                if (s == 1){
                    if (i < m - 1){
                        str1 = '0' + str1;
                    }
                    else {
                        str1 = '1' + str1; 
                        s = 0;
                    }
                }
                else{
                    if (i < m - 1) {
                        str1 = (char)((s - 1) + '0') + str1;
                        s = 1;
                    }
                    else {
                       str1 = (char)(s + '0') + str1;
                       s = 0;
                    }
                }
            }
            i++;
        }
        cout << str1 << " " << str;
    }
}