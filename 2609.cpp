#include<iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a%b);
	}
}
int main() {
	int m;;
	int a, b;
	cin >> a;
	cin >> b;
	m = gcd(a, b);
	cout << m << endl;
	cout << a*b / m << endl;

}