#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;
int main() {
	int n, m;
	queue<int> p,q;
	cin >> n >> m;
	//p스택 초기화
	for (int i = 1; i <= n; i++) {
		p.push(i);
	}
	
	while(!p.empty()){
		for (int i = 1; i < m; i++) {
			p.push(p.front());
			p.pop();
		}
		q.push(p.front());
		p.pop();
	}
	cout << '<';
	for (int i = 0; i < n-1; i++) {
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front();
	cout << '>'<<endl;



}
