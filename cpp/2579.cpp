
#include<iostream>
#include<algorithm>
using namespace std;
int a[310];
int d[310];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i <n; i++) {
		cin >> a[i];
	}
	d[0] = a[0];
	d[1] = a[0] + a[1];
	for (int i = 2; i <n; i++) {
		d[i] = max(d[i - 2] + a[i], d[i - 3] + a[i] + a[i - 1]);
	}
	cout << d[n-1] << endl;
	return 0;
}