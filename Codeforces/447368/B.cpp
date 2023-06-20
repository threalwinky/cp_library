#include<bits/stdc++.h>
using namespace std;

long long spow(int a, int b){
    if (b == 0) return 1;
    long long tmp = spow(a, b/2);
    if (b & 1) return tmp * tmp * a;
    return tmp * tmp;
}

long long btd(string a){
    long long tmp = 0;

    for (int i=0; i<a.length(); i++){
        if (a[i] == '1'){
            tmp+=spow(2, i + 1 - a.length());
        }
    }
    return tmp;
}

int main(){
    string a, b;
    long long x, y;
    cin >> a >> b;
    x = btd(a);
    y = btd(b);
    long long tmp1 = (long long)sqrt(x);
    long long tmp2 = (long long)sqrt(y);
    if (tmp1  * tmp1 == x) x = (tmp1 -1)* (tmp1-1);
    else x = tmp1 * tmp1;
    if (tmp2 * tmp2 == y) y = (tmp2)* (tmp2);
    else y = tmp2 * tmp2;
    cout << (long long)sqrt(y) - (long long)sqrt(x);
}