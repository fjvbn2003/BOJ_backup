#include<iostream>
using namespace std;
int arr[110];
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a%b);
	}
}
int main() {
	int m;
	long long sum = 0;
	int cnt;
	int cnt_in;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> cnt_in;
		for (int j = 0; j < cnt_in; j++) {
			cin >> arr[j];
		}
		for(int j=0; j<cnt_in; j++){
			for(int k=j+1; k<cnt_in; k++){
				sum+=gcd(arr[k],arr[j]);
			}
		}
		cout << sum << endl;
		sum = 0;
	}

}