/**
 *   author: winky
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
using namespace             std;
//#pragma GCC               optimize("Ofast,unroll-loops,inline")
//#pragma GCC               target("bmi,bmi2,lzcnt,popcnt")
//#pragma GCC               target("movbe")
//#pragma GCC               target("aes,pclmul,rdrnd")
//#pragma GCC               target("avx,avx2,f16c,fma,sse,sse2,sse3,ssse3,sse4,sse4.1,sse4.2,abm,mmx,avx,tune=native")
#define FASTIO              ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FILEIO1(a)          freopen(a + "inp", "r", stdin);freopen(a + "out", "w", stdout)
#define FILEIO2(a)          freopen(a + "inp", "r", stdin);
#define FILEIO3             freopen("a.inp", "r", stdin);freopen("a.out", "w", stdout)
#define fu(i, a, b)         for (int i = a; i<=b; i++)
#define fd(i, a, b)         for (int i = a; i>=b; i--)
#define fa(it, x)           for (auto it : x)
#define tri(a, b, c)        ((a) ? (b) : (c))
#define carr(arr, n)        cout<<"(";fu(i, 1, n ){cout<<arr[i]<<tri(i == n, "", ", ");}cout<<")\n";
#define fi                  first
#define se                  second
#define all(it)             it.fi << " " << it.se <<"\n"
#define debug(x)            cerr<<x<<" ";
#define comma(x)            fixed << setprecision((x))
//define int                long long
typedef pair<int, int>      ii;
typedef long long           ll;
typedef vector<int>         vi;
typedef vector<ii>          vii;
typedef vector<ll>          vll;
const int MAX =             3e5;
const int MOD =             1e9 + 7;
const int inf =             2147483647;
const double PI =           3.14159265358979;
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/

signed main(){
    //FILEIO3;
    FASTIO;
    int T;
    cin>>T;
    while (T--){
    	map<char, int> m1, m2;
    	bool flag = 0, flag2 = 0;
    	int n, tmp = 0, tmp1 = 0;
    	string s;
    	cin>>n>>s;
    	if (n % 2 == 1) cout<<"-1";
    	else {
    		int dem = 0;
    		for (int i = 0; i<n/2; i++){
    			if (s[i] == s[n - i - 1]){
    				m1[s[i]]++;
    				tmp++;
    			}
    			else{
    				tmp1++;
    				m2[s[i]]++;
    			}
    		}
    		for (auto x:m1){
    			if (x.second > tmp - x.second && (x.second != tmp)) flag = 1;
    			else if (x.second == tmp) flag2 = 1;
    		}
    		if (flag) cout<<"-1";
    		else{
    			if (tmp1 < tmp && flag2 == 1) cout<<-1;
    			else{
    				if (tmp%2==0)
    				cout<<tmp/2;
    				else cout<<tmp/2+1;
    			}
    		}
    		
    	}
    	cout<<"\n";
    }
}