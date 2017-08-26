#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int a;
	int b;
	while (scanf("%d%d", &a, &b) != EOF) {
		if (a == 0 && b == 0) {
			return 0;
		}
		cout << a + b << endl;
	}
	return 0;
}