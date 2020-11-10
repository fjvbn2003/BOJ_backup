#include <iostream>
using namespace std;
int arr[501];
int dp[501];
int main() {
	int n, a, b;
	cin >> n;
    	for (int i = 1; i < 501; i++) { dp[i] = n;}

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr[a] = b;
        dp[a] = n-1;
	}
	for (int i = 2; i < 501; i++) {
        if(arr[i]==0){continue;}
		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[i]) {
				//cout <<"HI"<<arr[j]<<" "<< arr[i]<<endl;
				if (dp[j] - 1 < dp[i]) { dp[i] = dp[j] - 1; }
			}
		}
	}
	int min_val = 501;
	for (int i = 1; i < 501; i++) {
		//cout << dp[i]<<" ";
		if (dp[i] < min_val) { min_val = dp[i]; }
	}
	cout << min_val << endl;
}