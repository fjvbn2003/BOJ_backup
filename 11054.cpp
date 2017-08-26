#include <iostream>
#include <algorithm>
using namespace std;
int S[1010] = { 0 };
int DPD[1010] = { 1 };
int DPI[1010] = { 1 };
int main() {
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> S[i];
	}
	// 감소하는 순열
	for (int i =cnt-1; i >0; i--) {
		DPD[i] = 1;
		for (int j = i+1; j <cnt; j++) {
			if (S[j] < S[i] && DPD[j] >= DPD[i]) {
				DPD[i] = DPD[j] + 1;
			}
		}
	}
	// 증가하는 순열
	for (int i = 1; i < cnt; i++) {
		DPI[i] = 1;
		for (int j = i - 1; j >= 0; j--) {
			if (S[j] < S[i] && DPI[j] >= DPI[i]) {
				DPI[i] = DPI[j] + 1;
			}
		}
	}
	int m = 0;
	for (int i = 0; i < cnt; i++) {
		m = max(DPI[i] + DPD[i] - 1,m);
	}

	cout << m << endl;
}