#include <stack>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
	stack<char> L;
	stack<char> R;
	string temp;
	char  a, b;
	int cnt;
	cin >> temp;
	cin >> cnt;
	// 왼쪽 스택에 채우기
	for (int i = 0; i < temp.size(); i++) {
		L.push(temp[i]);
	}

	for (int i = 0; i < cnt; i++) {
		cin >> a;

		if (a == 'L') {
			if (L.empty()) continue;
			R.push(L.top());
			L.pop();
		}
		else if (a == 'D') {
			if (R.empty()) continue;
			L.push(R.top());
			R.pop();
		}
		else if (a == 'B') {
			if (L.empty()) continue;
			L.pop();
		}
		else if (a == 'P') {
			cin >> b;
			L.push(b);
		}
		else cout << "잘못된 입력" << endl;
	}
	while (!L.empty()) {
		R.push(L.top());
		L.pop();
	}
	while (!R.empty()) {
		printf("%c", R.top());
		R.pop();
	}
	printf("\n");

	
}