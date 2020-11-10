#include <iostream>
#include <algorithm>
using namespace std;
int S[1010] = { 0 };
long long DP[1010] = { 1 };
int main() {
	int cnt;
	int ind = 0;;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> S[i];
		DP[i] = S[i];
	}
	DP[0] = S[0];
	for (int i = 1; i < cnt; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (S[j] < S[i]) {
				DP[i] = max(DP[j] + S[i],DP[i]);

			}
		}
	}
	long long max = 0;
	for (int i = 0; i < cnt; i++) {
		if (DP[i] > max) {
			max = DP[i];
		}
	}

	cout << max << endl;
}