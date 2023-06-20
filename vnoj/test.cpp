#include<bits/stdc++.h>
using namespace std;
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
int main(){
    BigInt a = "0"; 
    BigInt b = "3459803";
    BigInt c = a + b;
    a.out();
    b.out();
    c.out();
}

