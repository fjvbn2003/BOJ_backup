#include<stdio.h>
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
	int cnt;
	int t;
	string temp;
	stack<int> s;
	cin >> cnt; //�ݺ�Ƚ��
	for (int i = 0; i < cnt; i++) {
		cin >> temp;
		//push
		if (temp == "push") {
			cin >> t;
			s.push(t);
		}
		else if (temp == "pop") {
			if (s.empty()) cout << -1 << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (temp == "size") {
			cout << s.size() << endl;
		}
		else if (temp == "empty") {
			cout << s.empty()<< endl;
		}
		else if (temp == "top") {
			if (s.empty()) cout << -1 << endl;
			else{
				cout << s.top() << endl;
			}
		}
		else cout << "�߸� �Է�" << endl;
	
	}
	return 0;
}