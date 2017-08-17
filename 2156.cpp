#include<iostream>
#include<algorithm>

int B[10010] = {0};
int DP[10010][2] = {0};

using namespace std;
int main() {


	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> B[i];
	}

	DP[0][1] = B[0];
	DP[1][0] = DP[0][1];
	DP[1][1] = DP[0][1]+B[1];
	for (int i = 2; i < cnt; i++) {
		DP[i][0] = max(DP[i - 1][1] , DP[i - 1][0] );
		DP[i][1] = max(DP[i - 2][0] + B[i-1] + B[i], DP[i - 2][1] + B[i]);
	}

	//µð¹ö±ë¿ë
	//for (int i = 0; i < cnt; i++) {
	//	cout << DP[i][0]<<" " << DP[i][1]<< endl;
	//}
	cout << max(DP[cnt - 1][1], DP[cnt - 1][0]) << endl;
}