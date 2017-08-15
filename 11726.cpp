#include<iostream>
using namespace std;
long long DP[1001] = {0};

long long t(int d) {
	
	if (DP[d] == 0) {
		DP[d] = t(d - 1) + t(d - 2)*2;
		return DP[d]%10007;
	}
	else
	{
		return DP[d]%10007;

	}

}

int main() {
	DP[1] = 1;
	DP[2] = 3;
	int a;
	cin >> a;
	cout << t(a) << endl;

}