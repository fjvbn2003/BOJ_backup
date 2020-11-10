#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int cnt;
	int ans = 0;
	bool a;
	int temp;
	int sq;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> temp;
		sq = sqrt(temp);
		a = true;
		for (int j = 2; j < sq; j++) {
			if (temp%j != 0) {
				continue;
			}
			else {
				a = false;
				break;
			}
		}
		if (temp == 1) {
			a = false;
		}

		if (a = true) {
			cout << cnt << endl;
			ans++;
		}
		else {
			continue;
		}
	}
	cout << ans << endl;
}