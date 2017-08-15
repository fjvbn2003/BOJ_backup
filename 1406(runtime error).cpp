#include <string>
#include <iostream>
#include<string.h>
using namespace std;
int main() {
	string s;
	int cnt;
	cin >> s;
	cin >> cnt;
	int pos;

	pos = s.size();
	char a, b;

	for (int i = 0; i < cnt; i++) {
		cin >> a;
		if (a == 'L') {
			if (pos == 0) continue;
			pos--;
		}
		else if (a == 'D') {
			if (pos == s.size()) continue;
			pos++;
		}
		else if (a == 'B') {
			if (pos == 0) continue;
			s = (s.substr(0,pos-2 )+s.substr(pos++));
			pos -= 2;
		}
		else if( a == 'P') {
			cin >> b;
			if (pos == 0) {
				s = b + s;
				pos++;
			}
			else {
				s = s.substr(0, pos) + b + s.substr(pos);
				pos += 2;
			}

		}
		else cout << "잘못된 입력" << endl;
	}
	cout << s << endl;

}