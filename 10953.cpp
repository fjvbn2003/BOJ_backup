#include<iostream>
#include<string>
using namespace std;
int main() {
	int cnt;
	string a;
	
	cin >> cnt;
	for (int k = 0; k < cnt; k++) {
		cin >> a;
		cout << int(a[0])-'0' + int(a[2])-'0' << endl;

	}

}