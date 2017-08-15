#include <iostream>

int D[1001][10];
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		D[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++) {
				D[i][j] += D[i - 1][k];
				D[i][j] %= 10007;
			}
		}
	}
	long long sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += D[n][i];

	}

	cout << sum%10007 << endl;
}