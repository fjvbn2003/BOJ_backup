#include<iostream>
using namespace std;
int main() {
	int ans = 0;
	int max = 0;
	int in;
	int out;
	for (int i = 0; i < 4; i++) {
		cin >> out;
		cin >> in;
		ans += in;
		ans -= out;
		if (ans > max) {
			max = ans;
		}
	}
	cout << max << endl;
}