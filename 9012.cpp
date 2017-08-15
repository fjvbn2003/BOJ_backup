#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>

using namespace std;
int main() {
	stack<char> s;
	string temp;
	int cnt; //반복횟수
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> temp;
		for (int j = 0; j < temp.size(); j++) {

			
			if (s.empty()) {
				s.push(temp[j]);
			//	cout <<"s size: "<< s.size() << endl;
			}

			else if (s.top() == ')') {
			//	cout << "s size: " << s.size() << endl;
				break;
			}

			else {
				if (temp[j] == ')') {
					s.pop();
				//	cout << "s size: " << s.size() << endl;
					continue;

				}
				s.push('(');
				//cout << "s size: " << s.size() << endl;

			}
		}
		if (s.empty()) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
		//스택 초기화
		while (!s.empty()) s.pop();
	}

}