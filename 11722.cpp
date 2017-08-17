#include <iostream>
using namespace std;
int S[1010] = { 0 };
int DP[1010] = { 1 };
int main() {
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> S[i];
	}


	for (int i = 1; i < cnt; i++) {
		DP[i] = 1;
		for (int j = i - 1; j >= 0; j--) {
			if (S[j] > S[i] && DP[j] >= DP[i]) {
				DP[i] = DP[j] + 1;
			}
		}
	}
	int max = 0;
	for (int i = 0; i < cnt; i++) {
		if (DP[i] > max) {
			max = DP[i];
		}
	}

	cout << max << endl;
}