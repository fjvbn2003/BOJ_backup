#include<iostream>
using namespace std;
int arr[110];
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a%b);
	}
}
int main() {
	int m;
	int sum = 0;
	int cnt;
	int cnt_in;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> cnt_in;
		for (int j = 0; j < cnt_in; j++) {
			cin >> arr[j];
		}
		for (int a = 1; a < cnt_in; a++) {
			for (int b = a - 1; b >= 0; b--) {
				sum += gcd(arr[a], arr[b]);
			}
		}
		cout << sum << endl;
		sum = 0;
	}

}