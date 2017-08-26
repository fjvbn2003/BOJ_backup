#include<iostream>
using namespace std;
long long S[100010] = {0};
long long DP[100010] = {0};
int main() {
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> S[i];
	}
	DP[0] = S[0];
	for (int i = 1; i < cnt; i++) {
		DP[i] = S[i];
		if (DP[i] < DP[i - 1] + S[i] ) {
			DP[i] = DP[i - 1] + S[i];
		}
	}
	long long ans = DP[0];
	for (int i = 0; i < cnt; i++) {
		if (ans < DP[i]) {
			ans = DP[i];
		}
	}

	cout << ans << endl;
}