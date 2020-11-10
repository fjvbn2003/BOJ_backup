#include <stdio.h>
#include <string>
#include <stack>
#include <iostream>
using namespace std;

int main() {
	string temp;
	stack<int> s;
	int ans = 0;
	cin >> temp;
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i] == '(') {
			s.push(i);
		}
		else {
			if (s.top() + 1 == i) {
				s.pop();
				ans += s.size();
			}
			else {
				s.pop();
				ans += 1;
		
			
			}
		}
	}
	cout << ans << endl;


}