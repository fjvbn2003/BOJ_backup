#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main() {
	string s;
	int tem;
	getline(cin, s);
	for (char(a) : s) {
		if (a = ' ') {
			cout << ' ';
		}
		else if (47 < int(a) && int(a) < 58) {
			cout << a;
		}
		else if (64 < int(a) && int(a) < 91) {
			cout << char((int(a)-52)%26 + 65);
		}
		else {
			cout << char((int(a)-84)%26 + 97);
		}
	
	}
	cout << endl;

}