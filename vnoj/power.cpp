//code by iwttry

/*INCLUDES*/
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <limits.h>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

/*USING LIBRABRIES*/

using namespace std;

/*DEFINES*/

#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX 1000001
#define MOD 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double
#define endline "\n"
#define f1(i,n) for (int i=1; i<=n; i++)
#define f0(i,n) for (int i=0; i<n; i++)
#define f1d(i,n) for (int i=n; i>=1; i--)
#define f0d(i,n) for (int i=n; i>=0; i--)

/*TEMPLATES*/

template<class T> bool umin(T& a, const T& b) {return b<a?a=b, 1:0;}
template<class T> bool umax(T& a, const T& b) { return a<b?a=b, 1:0;} 

/*MOST USED FUNCTION*/
//+++ERATOSTHENES SIEVE+++
/*bool pn[MAX];
void eratos(){
    pn[0] = pn[1] = true;
    for (int i=2; i*i<MAX; i++) if (!pn[i])
    for (int j=i*i; j<MAX; j+=i)
    pn[j]=true;
}*/
/*------------------------------------------*/
//+++LOWERBOUND+++
int lowerIndex(int arr[], int n, int x) 
{ 
    int l = 0, h = n - 1; 
    while (l <= h) { 
        int mid = (l + h) / 2; 
        if (arr[mid] >= x) 
            h = mid - 1; 
        else
            l = mid + 1; 
    } 
    return l; 
}
/*------------------------------------------*/
//+++UPPERBOUND+++
int upperIndex(int arr[], int n, int y) 
{ 
    int l = 0, h = n - 1; 
    while (l <= h) { 
        int mid = (l + h) / 2; 
        if (arr[mid] <= y) 
            l = mid + 1; 
        else
            h = mid - 1; 
    } 
    return h; 
}
/*------------------------------------------*/
//+++COMBINATION+++
ll C(int n, int k ){
    k = min(k, n - k);
    ll res = 1;
    for (int i = 1; i <= k;i++){
        res *= (n-i+1);
        res/=i;
    }
    return res;
}
/*------------------------------------------*/
//+++FIBONACCINUMBER+++
ll fibo(int k){
    if (k == 0 || k == 1) return 1;
    const int half = k/2;
    if (k & 1)
        return fibo(half)*fibo(half+1)+fibo(half-1)*fibo(half);
    else{
        return fibo(half)*fibo(half) + fibo(half-1)*fibo(half-1);
    }
}
/*-----------------------------------------------*/
/*-----------------------------------------------*/
/*-----------------------------------------------*/
/*-----------------------------------------------*/
/*CODE*/
ll l, r, dem = 1;
void inp(){
    cin>>l>>r;
}

void solve(){
    int ans = 0;
    for (int i = 0; i<=40; i++){
    	//cout<<i<<" "<<ceil(pow(r, 1.0/i))<<" "<<floor(pow(r, 1.0/i))<<" "<<((long long)pow(ceil(pow(r, 1.0/i)), i) == r)<<endline;
    	if ((floor(pow(r, 1.0/i)) - ceil(pow(l, 1.0/i)) >= 0) || (((ll)pow(round(pow(r, 1.0/i)), i) == r && ((ll)pow(round(pow(l, 1.0/i)), i) == l)))) {
    		ans = max(ans, i);
    	}
    }
    cout<<"Case #"<<dem<<": "<<ans<<endline;
    dem++;
}

void out(){
    
}

int main(){
    fastIO;
    int T; cin>>T;
    while (T--){
	    inp();
	    solve();
	    out();
	}
    return 0;
}