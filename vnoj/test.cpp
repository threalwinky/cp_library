#include <bits/stdc++.h>
using namespace std;
int a[10005], b[10005], c[10005];

int sapxep(int x){
	string s = to_string(x);
	if (x >= 0){
        sort(s.begin(), s.end(), greater<char>());
        int maxi = stoi(s);
        return maxi;
    }
    else if (x < 0) {
        string s = to_string(-x);
        sort(s.begin(), s.end(), greater<char>());

        int maxi = stoi(s);
        return -maxi;
    }

}

bool cmp(int a, int b){
    return abs(a) > abs(b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        b[i] = sapxep(a[i]);
    }
    sort(b + 1, b + 1 + n, cmp);
    for (int i = 1; i <= n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
