#include <iostream>
#include <algorithm>
using namespace std;
int cnt;
int P[1001] = {0};
int DP[1001] = {0};

int bung() {
	DP[1] = P[1];
	for (int i = 1; i <= cnt; i++) {
		for (int j = 1; j <= i; j++) {
			DP[i] = max(DP[i], DP[i - j] + P[j]);
		}
	}
	return DP[cnt];

}

int main() {
	
	cin >> cnt;
	for (int i = 1; i <= cnt; i++) {
		cin >> P[i];
	}
	cout << bung() << endl;


}