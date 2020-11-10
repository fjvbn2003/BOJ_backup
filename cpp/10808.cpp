#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	string temp;
	char chr[26] = {0};

	for (int i = 0; i < 26; i++) {
		chr[i] = -1;
	}

	cin >> temp;

	for (int i = 0; i < temp.size(); i++) {
		if (chr[int(temp[i]) - 97] != -1) continue;
		chr[int(temp[i]) - 97] = i;
	}

	for (int a : chr) {
		cout << a << " ";
	}
	cout << endl;

}