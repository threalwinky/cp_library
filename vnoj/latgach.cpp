/**
 *   author: winky
 *   created: 2023-05-25 22:25:32
**/

// Obey my waifu
//⢸⣿⣿⣿⣿⠃⠄⢀⣴⡾⠃⠄⠄⠄⠄⠄⠈⠺⠟⠛⠛⠛⠛⠻⢿⣿⣿⣿⣿⣶⣤⡀⠄
//⢸⣿⣿⣿⡟⢀⣴⣿⡿⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣸⣿⣿⣿⣿⣿⣿⣿⣷
//⢸⣿⣿⠟⣴⣿⡿⡟⡼⢹⣷⢲⡶⣖⣾⣶⢄⠄⠄⠄⠄⠄⢀⣼⣿⢿⣿⣿⣿⣿⣿⣿⣿
//⢸⣿⢫⣾⣿⡟⣾⡸⢠⡿⢳⡿⠍⣼⣿⢏⣿⣷⢄⡀⠄⢠⣾⢻⣿⣸⣿⣿⣿⣿⣿⣿⣿
//⡿⣡⣿⣿⡟⡼⡁⠁⣰⠂⡾⠉⢨⣿⠃⣿⡿⠍⣾⣟⢤⣿⢇⣿⢇⣿⣿⢿⣿⣿⣿⣿⣿
//⣱⣿⣿⡟⡐⣰⣧⡷⣿⣴⣧⣤⣼⣯⢸⡿⠁⣰⠟⢀⣼⠏⣲⠏⢸⣿⡟⣿⣿⣿⣿⣿⣿
//⣿⣿⡟⠁⠄⠟⣁⠄⢡⣿⣿⣿⣿⣿⣿⣦⣼⢟⢀⡼⠃⡹⠃⡀⢸⡿⢸⣿⣿⣿⣿⣿⡟
//⣿⣿⠃⠄⢀⣾⠋⠓⢰⣿⣿⣿⣿⣿⣿⠿⣿⣿⣾⣅⢔⣕⡇⡇⡼⢁⣿⣿⣿⣿⣿⣿⢣
//⣿⡟⠄⠄⣾⣇⠷⣢⣿⣿⣿⣿⣿⣿⣿⣭⣀⡈⠙⢿⣿⣿⡇⡧⢁⣾⣿⣿⣿⣿⣿⢏⣾
//⣿⡇⠄⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢻⠇⠄⠄⢿⣿⡇⢡⣾⣿⣿⣿⣿⣿⣏⣼⣿
//⣿⣷⢰⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⢰⣧⣀⡄⢀⠘⡿⣰⣿⣿⣿⣿⣿⣿⠟⣼⣿⣿
//⢹⣿⢸⣿⣿⠟⠻⢿⣿⣿⣿⣿⣿⣿⣿⣶⣭⣉⣤⣿⢈⣼⣿⣿⣿⣿⣿⣿⠏⣾⣹⣿⣿
//⢸⠇⡜⣿⡟⠄⠄⠄⠈⠙⣿⣿⣿⣿⣿⣿⣿⣿⠟⣱⣻⣿⣿⣿⣿⣿⠟⠁⢳⠃⣿⣿⣿
//⠄⣰⡗⠹⣿⣄⠄⠄⠄⢀⣿⣿⣿⣿⣿⣿⠟⣅⣥⣿⣿⣿⣿⠿⠋⠄⠄⣾⡌⢠⣿⡿⠃
//⠜⠋⢠⣷⢻⣿⣿⣶⣾⣿⣿⣿⣿⠿⣛⣥⣾⣿⠿⠟⠛⠉⠄⠄⠄⠄⣾⡌⢠⣿⡿⠃

#include                    <bits/stdc++.h>
#include <bitset>
#include <iomanip>
using namespace             std;
//#pragma GCC               optimize("Ofast,unroll-loops,inline")
//#pragma GCC               target("bmi,bmi2,lzcnt,popcnt")
//#pragma GCC               target("movbe")
//#pragma GCC               target("aes,pclmul,rdrnd")
//#pragma GCC               target("avx,avx2,f16c,fma,sse,sse2,sse3,ssse3,sse4,sse4.1,sse4.2,abm,mmx,avx,tune=native")
#define fu(i, a, b)         for (int i = a; i<=b; i++)
#define fd(i, a, b)         for (int i = a; i>=b; i--)
#define fa(it, arr)         for (auto it : arr)
#define tri(a, b, c)        ((a) ? (b) : (c))
#define carr(arr, n)        cout<<"[";fu(i, 1, n ){cout<<arr[i]<<tri(i == n, "", ", ");}cout<<"]\n";
#define fi                  first
#define se                  second
#define all(it)             it.fi << " " << it.se <<"\n"
#define debug(x)            cerr<<"+Debug for "<<(#x)<<" : "<<x<<"\n";
#define comma(f, x)         fixed << setprecision((x)) << f
#define endl                cout<<"\n";
//#define int               long long
typedef pair<int, int>      ii;
typedef long long           ll;
typedef vector<int>         vi;
typedef vector<ii>          vii;
typedef vector<ll>          vll;
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
struct BigInt{
    vector<char> a;//turn string into vector
    short sign;//number sign 0 with number 0, 1 with positive numbers, -1 with negative numbers
    int len = 0;
    BigInt():
        sign(1){

        }
    BigInt(const char s[]){
        *this = s;
    }
    void operator=(const BigInt &b){
        sign = b.sign;
        len = b.len;
        a = b.a;
    }
    void operator=(const char b[]){
        a.clear();
        bool flag = 0;
        int cnt = 0;
        sign = (b[0] == '-') ? -1 : 1;
        for (int i = ((sign == 1) ? 0 : 1); i<strlen(b); i++){
            if (b[i] != '0'){
                flag = 1;
            }
            if (flag){
                a.push_back(b[i]);        
                cnt++;
            }
        }
        reverse(a.begin(), a.end());
        if (a.empty()){a.push_back('0');sign = 0;cnt = 1;}
        len = cnt;
    }
    void out(){
        cout<<"Sign : "<<sign<<"\n";
        cout<<"Length : "<<len<<"\n";
        cout<<"Value : ";
        if (sign == -1) cout<<'-';
        for (int i = len-1; i>=0; i--) cout<<a[i];
        cout<<"\n";
    }
    void out2(){
        for (int i = len-1; i>=0; i--) cout<<a[i];
        cout << "\n";
    }
    BigInt abs() const{
        BigInt tmp = *this;
        tmp.sign *= tmp.sign;
        return tmp;
    }
    bool operator==(BigInt b) const{
        if (sign != b.sign) return 0;
        if (len != b.len) return 0;
        for (int i = len - 1; i>=0; i--){
            if (a[i] != b.a[i]){
                return 0;
            }
        }
        return 1;
    }
    bool operator<(BigInt b) const{
        if (sign != b.sign) return sign < b.sign;
        if (len != b.len){
            if (sign == -1) return len > b.len;
            return len < b.len;
        }
        for (int i = len - 1; i>=0; i--){
            if (a[i] != b.a[i]){
                return ((a[i] - '0') < (b.a[i] - '0'));
            }
        }
        return 0;
    }
    bool operator<=(BigInt b) const{
        if (sign != b.sign) return sign < b.sign;
        if (len != b.len){
            if (sign == -1) return len > b.len;
            return len < b.len;
        }
        for (int i = len - 1; i>=0; i--){
            if (a[i] != b.a[i]){
                return ((a[i] - '0') < (b.a[i] - '0'));
            }
        }
        return 1;
    }
    bool operator>(BigInt b) const{
        if (sign != b.sign) return sign > b.sign;
        if (len != b.len){
            if (sign == -1) return len < b.len;
            return len > b.len;
        }
        for (int i = len - 1; i>=0; i--){
            if (a[i] != b.a[i]){
                return ((a[i] - '0') > (b.a[i] - '0'));
            }
        }
        return 0;
    }
    bool operator>=(BigInt b) const{
        if (sign != b.sign) return sign > b.sign;
        if (len != b.len){
            if (sign == -1) return len < b.len;
            return len > b.len;
        }
        for (int i = len - 1; i>=0; i--){
            if (a[i] != b.a[i]){
                return ((a[i] - '0') > (b.a[i] - '0'));
            }
        }
        return 1;
    }
    BigInt operator-() const{
        BigInt tmp = *this;
        tmp.sign *= -1;
        return tmp;
    } 
    BigInt operator+(BigInt b) const{
        if (sign == 0) return b;
        if (b.sign == 0) return *this;
        BigInt sum;
        if (sign == b.sign){
            int alen, blen;
            alen = len; blen = b.len;
            int i = 0, j = 0, rmd = 0, k = 0;
            while (i < alen || j < blen || rmd != 0){
                int d;
                if (i == alen && j == blen) d = rmd;
                else if (i == alen) d = b.a[j] - '0' + rmd;
                else if (j == blen) d = a[i] - '0' + rmd;
                else d = a[i] + b.a[j] - 2*'0' + rmd;
                rmd = 0;
                if (d > 9){
                    rmd = 1;
                    d %= 10;
                }
                sum.a.push_back(d+'0');
                i++; j++; k++;
            }
            sum.sign = sign;
            sum.len = k;
            return sum;
        }
        if (sign == 1) return *this - -(b);
        return b - -(*this);
    }
    
    BigInt operator-(BigInt b) const{
        if (*this == b){ BigInt tmp; tmp.a.push_back('0'); tmp.sign = 0; tmp.len = 1; return tmp;}
        if (sign != b.sign) return *this + -(b);
        BigInt sub;
        if (sign == 1){
            BigInt sbt, st;
            if (*this < b){
                sbt = b;
                st = *this;
                sub.sign = -1;
            }
            else{
                sbt = *this;
                st = b;
            }
            int i = 0, j = 0, k = 0, rmd = 0;
            int alen = sbt.len, blen = st.len;
            while (i < alen || j < blen || rmd == 1){
                int d;
                if (j == blen) d = sbt.a[i] - '0' - rmd;
                else d = sbt.a[i] - st.a[j] - rmd;
                rmd = 0;
                if (d < 0){
                    rmd = 1;
                    d+=10;
                }
                if (i == alen - 1 && d == 0){
                    k += 0;
                }
                else sub.a.push_back(d+'0');
                i++; j++; k++;
            }
            sub.len = k;
        }
        else{
            return -(b) - -(*this); 
        }
        return sub;
    }
};

BigInt F[maxN];

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int T;
    cin >> T;
    F[1] = "1";
    F[2] = "2";
    for (int i=3; i<=200; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    while (T--){
        int n;
        cin >> n;
        F[n].out2();
    }
}
