#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, b;
	cin >> n >> b;
	string ans = "";
	while (n > 0) {
		int r = n % b;
		if (r < 10) {
			ans += (char)(r + '0');
		}
		else {
			ans += (char)(r - 10 + 'A');
		}
		n /= b;
	}
	for (int i = ans.size() - 1; i>=0; i--) {
		cout << ans[i];
	}
	cout << endl;
	return 0;
}