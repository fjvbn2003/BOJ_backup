#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int a;
	int b;
	while(scanf("%d%d",&a,&b) != EOF) {
		cout << a + b << endl;
	}
	return 0;
}