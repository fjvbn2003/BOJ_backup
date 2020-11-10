#include<iostream>

using namespace std;

int main() {
	int m;
	cin >> m;
	int f;
	int d;
	for (int a = 0; a < m; a++) {
		cin >> f;
		cin >> d;
		cout << "Case #" << a + 1 << ": " << f + d << endl;
	}

}