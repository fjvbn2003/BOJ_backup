#include <iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;
//�迭
int DP[1000001] = {0};

int one(int d) {

	if (d == 1) return 0;
	
	//���� ���� �� �־��ֱ�
	if (DP[d] == 0) {
		if (d % 3 == 0) {
			DP[d] = min(one(d / 3) + 1, one(d - 1) + 1);
			return(DP[d]);
		}
		else if (d % 2 == 0) {
			DP[d] = min(one(d / 2) + 1, one(d - 1) + 1);
			return(DP[d]);
		}
		else {
			DP[d] = one(d - 1) + 1;
			return(DP[d]);
		}

	}
	// �� ������Ʈ �κ�
	else {
		return DP[d];
	}
}



int main() {
	DP[1] = 0;
	DP[2] = 1;
	int a;
	cin >> a;
	
	
	cout << one(a) << endl;
	
	return 0;
}