#include<iostream>
#include<string>
#include<stack>
#include<math.h>
using namespace std;
stack<int> s;

void conv(int a, int b) {
	while (a > 0) {
		int r = a % b;
		s.push(r);
		a /= b;
	}
}



int main() {
	int ad;
	int bd;
	int cnt;
	int temp;
	int sum =0;
	cin >> ad >> bd;
	cin >> cnt;
	for (int i = cnt-1; i >=0; i--) {
		cin >> temp;
		temp = temp*pow(ad, i);
		sum += temp;
	}
	conv(sum, bd);
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}