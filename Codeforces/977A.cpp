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
#define alength(n) sizeof(n)/sizeof(n[0])

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
//+++BINARY_SEARCH+++
int BinarySearch(int a[], int left, int right, int x){
	while (left < right){
		int mid = left + (right - left)/2;
		if (a[mid] == x) return mid;
		if (a[mid] > x) right = mid;
		else left = mid+1;
	}
	if (a[left] == a[right] && a[left] == x)
		return right;
	return -1;
}
/*------------------------------------------*/
//+++LOWER_BOUND+++
int LowerBound(int a[], int left, int right, int x){
	int mid;
	while (left <= right){
		mid = left + (right - left)/2;
		if (a[mid] == x) return a[mid];
		if (a[mid] >= x) right = mid - 1;
		else left = mid+1;
	}
	return a[left];
}
/*------------------------------------------*/
//++UPPER_BOUND+++
int UpperBound(int a[], int left, int right, int x){
	int mid;
	while (left <= right){
		mid = left + (right - left)/2;
		if (a[mid] > x) right = mid - 1;
		else left = mid+1;
	}
	return a[left];
}
/*------------------------------------------*/
//+++LOWER_DIVE+++
int LowerDive(int a[], int left, int right, int x){
	int mid;
	while (left <= right){
		mid = left + (right - left)/2;
		if (a[mid] < x) left = mid+1;
		else right = mid - 1;
	}
	return a[right];
}
/*------------------------------------------*/
//+++UPPER_DIVE+++
int UpperDive(int a[], int left, int right, int x){
	int mid;
	while (left <= right){
		mid = left + (right - left)/2;
		if (a[mid] == x) return a[mid];
		if (a[mid] <= x) left = mid+1;
		else right = mid - 1;
	}
	return a[right];
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
string splithead(string s){
    string tmp;
    for (int i = 0; i<s.length(); i++)
    {
        if (s[i] == '*') break;
        tmp+=s[i];
    }
    return tmp;
}

string splittail(string s){
    string tmp;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '^') break;
        tmp = s[i] + tmp;
    }
    return tmp;
}

int stoiii(string n){
    int temp = 0;
    int temp1 = 1;
    for (int i = n.length()-1; i>=0 ; i--){

        temp += (n[i] - '0')*temp1;
        temp1*=10;
    }
    return temp;
}

string format_pretty(string s){
	string tmp;
	for (int i = 0; i<s.length() - 3; i++) tmp += s[i];
	return tmp;
}

string s1, s2;
int T, tmp;
void inp(){
	getline(cin, s1);
	getline(cin, s2);
}

void out(){
    map<int, int> m;
	string word;
	stringstream ss(s1);
	while (ss >> word){
		if (word != "+")
		m[stoiii(splittail(word))] += stoiii(splithead(word));
	}
	stringstream ss1(s2);
	while (ss1 >> word){
		if (word != "+")
		m[stoiii(splittail(word))] += stoiii(splithead(word));
	}
	string ans;
	for (auto x:m){
		ans = to_string(x.second) + "*x^" + to_string(x.first) + " + " + ans;
	}
	cout<<"#Test "<<tmp - T<<": "<<format_pretty(ans)<<endline;
}

int main(){
    fastIO;
	cin>>T;
	cin.ignore();
	tmp = T;
	while (T--)
	{
		inp();
		out();
	}
    return 0;
}