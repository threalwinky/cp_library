#include<iostream>
#include<math.h>
#include<iomanip>

#define N 1000
using namespace std;

int main() {
	double f[N];
	int T, n;
	cin >> T;
	f[0] = 0;
	for (int i = 1; i <= N; ++i)
		f[i] = sqrt((double)i + (f[i - 1]));
	for (int i = 0; i < T; ++i)
	{
		cin >> n;
		cout << setprecision(5) << fixed << f[n] << "\n";
	}
	return 0;
}
