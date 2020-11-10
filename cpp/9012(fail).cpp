#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int cnt,l,r = 0;
	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		l = 0;
		r = 0;
		cin >> s;
		if (s[0] == ')') { cout << "NO" << endl; continue; }
		if (s[s.size()] == '(') { cout << "NO" << endl; continue; }

		for (int j = 0; j < s.size(); j++) {
			if (s[j] == '(') l++;
			else r++;
		}
		if (l == r) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}