#include <iostream>
#include <iomanip>
#define N 10000
using namespace std;

int main() {
	double sumN[N];
	sumN[1] = 1.0;
	for(int i = 2; i <= N; i++) {
		sumN[i] = sumN[i - 1] + 1.0 / (2.0 * i - 1);
	}
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++) {
		cout << fixed << setprecision(5) << sumN[arr[i]] << endl;
	}

	return 0;
}
