#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	int ans = 0;
	int temp = 0;
	int sqr;
	cin >> n;
	sqr = sqrt(n);
	ans++;
	temp = pow(sqr, 2);
	sqr--;
	while  (sqr >1)
	{
		
		temp += pow(sqr, 2);
		ans++;
		sqr--;
		if (n < temp) {
			temp -= pow(sqr, 2);
			ans--;
			sqr++;
			break;
		}
	}

	cout << ans + n-temp << endl;


}