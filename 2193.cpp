#include <iostream>
using namespace std;
long long DP[91][2] = {0};
int main() {
	int a;
	cin >> a;
	DP[1][0] = 1;
	DP[1][1] = 0;
	DP[2][0] = 1;
	DP[2][1] = 0;
	for (int i = 3; i <= a; i++) {
		DP[i][0] += DP[i - 1][1] + DP[i - 1][0];
		DP[i][1] += DP[i - 1][0];
	}

	cout << DP[a][0]+DP[a][1] << endl;
}