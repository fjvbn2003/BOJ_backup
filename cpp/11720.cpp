#include<iostream>
#include<string>

using namespace std;

int main() {

	int m;
	cin >> m;
	string f;
	cin >> f;

	int d=0;
	for (int a = 0; a < m; a++) { 
		d = d + f[a]-'0';
	}
	cout << d << endl;

}