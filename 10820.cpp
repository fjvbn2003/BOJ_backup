#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char s[100];

	while (fgets(s,100,stdin) != 0) {
		for (int i = 0; i < sizeof(s); i++) {
			if (s[i] == '\n') break;
			if (96 < int(s[i])) a++;
			else if (64 < int(s[i]) && int(s[i]) < 96) b++;
			else if (47 < int(s[i]) && int(s[i]) < 58) c++;
			else if (int(s[i]) == 32) d++;
			else continue;
		}
		cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
		a = 0;
		b = 0;
		c = 0;
		d = 0;
	}

}