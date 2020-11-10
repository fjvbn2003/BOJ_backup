#include <iostream>
using namespace std;
int a = 0;
int  b = 0;
int main()
{
	int n,t;
	cin >> t;
    // arr_zero[i]는 i번 째 피보나치 수열이 호출하는 fibonacci(0)의 갯수
    // arr_one[i]는 i번 째 피보나치 수열이 호출하는 fibonacci(1)의 갯수
    
	int arr_zero[41];
	int arr_one[41];

	arr_zero[0] = 1;
	arr_zero[1] = 0;
	arr_one[0] = 0;
	arr_one[1] = 1;
	arr_zero[2] = 1;
	arr_one[2] = 1;
	for (int i = 3; i <= 40; i++) {
		arr_zero[i] = arr_zero[i - 1] + arr_zero[i - 2];
		arr_one[i] = arr_one[i - 1] + arr_one[i - 2];
	}

	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << arr_zero[n] << " " << arr_one[n] << endl;

	}
    return 0;
}
