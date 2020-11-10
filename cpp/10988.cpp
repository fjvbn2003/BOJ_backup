#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int size = s.size();
	for (int i = 0; i < size / 2; i++) {
		if (s[i] != s[size - i-1]) {
			cout << 0 << endl;
			return 0;
		}
	}
	cout << 1 << endl;
	return 0;
}