#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
int n;

    
void inp(){
    cin>>n;
    vector<int> a(n), b(n+1, INT_MAX);
    for (int i = 0; i < n ; i++){
        cin>>a[i];
    }
    b[0] = INT_MIN;

    int result = 0;
    for (int x: a) {
        int k = lower_bound(b.begin(), b.end(), x) - b.begin();
        b[k] = x;
        result = max(result, k);
    }
    cout<<result;
}
int main(){
                           
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    inp();

}