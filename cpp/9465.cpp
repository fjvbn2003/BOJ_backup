#include <iostream>
#include <algorithm>
using namespace std;

long long DP[100010][3] = { 0 };
long long M[2][100010] = { 0 };

void in(int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		M[0][i] = temp;
	}
	for (int i = 0; i < n; i++) {
		cin >> temp;
		M[1][i] = temp;
	}
}

long long sticker(int n) {

	DP[0][1] = M[0][0];
	DP[0][2] = M[1][0];

	for (int i = 1; i < n; i++) {
		DP[i][0] = max(DP[i - 1][1], max(DP[i - 1][2], DP[i - 1][0]));
		DP[i][1] = max(DP[i - 1][2] + M[0][i], DP[i - 1][0] + M[0][i]);
		DP[i][2] = max(DP[i - 1][1] + M[1][i], DP[i - 1][0] + M[1][i]);
	}
	return 0;
}


int main() {
	int cnt;
	cin >> cnt;
	long long n;
	for (int i = 0; i < cnt; i++) {
		cin >> n;
		in(n);
		sticker(n);
		cout << max(DP[n - 1][0], max(DP[n - 1][1], DP[n - 1][2])) << endl;
	}
}