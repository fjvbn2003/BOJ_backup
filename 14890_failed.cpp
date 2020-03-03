#include <iostream>
using namespace std;
int n,l;
int ans = 0;
int arr[100][100];
int main(){
	cin >> n>>l;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>> arr[i][j];	
		}
	}
	// 행
	for(int i=0; i<n; i++){
		// 앞에서 뒤로
		int b = arr[i][0];
		int cnt =1;
		bool flag1 = true;
		for(int j=1; j<n; j++){
			if(arr[i][j] > b){
				b = arr[i][j];
				if(cnt >l){
					flag1 = false;
					break;
				}
				cnt = 1;
			}
			else if(arr[i][j] <b){
				flag1 = false;
				break;
			}else{
				cnt++;
			}
		}
		// 뒤에서 앞으로
		bool flag2 = true;
		b = arr[i][n-1];
		cnt = 1;
		for(int j=n-2; j>=0; j--){
			if(arr[i][j] > b){
				b = arr[i][j];
				if(cnt >l){
					flag2 = false;
					break;
				}
				cnt = 1;
			}
			else if(arr[i][j] <b){
				flag2 = false;
				break;
			}else{
				cnt++;
			}
		}
		if(flag1){cout<<i<<endl;}
		if(flag2){cout<<i<<endl;}
		
		if(flag1 || flag2){
			ans++;
		}
	}
	//열
	for(int i=0; i<n; i++){
		// 앞에서 뒤로
		int b = arr[0][i];
		int cnt =1;
		bool flag1 = true;
		for(int j=1; j<n; j++){
			if(arr[j][i] > b){
				b = arr[j][i];
				if(cnt >l){
					flag1 = false;
					break;
				}
				cnt = 1;
			}
			else if(arr[j][i] <b){
				flag1 = false;
				break;
			}else{
				cnt++;
			}
		}
		// 뒤에서 앞으로
		bool flag2 = true;
		b = arr[n-1][i];
		cnt = 1;
		for(int j=n-2; j>=0; j--){
			if(arr[j][i] > b){
				b = arr[j][i];
				if(cnt >l){
					flag2 = false;
					break;
				}
				cnt = 1;
			}
			else if(arr[j][i] <b){
				flag2 = false;
				break;
			}else{
				cnt++;
			}
		}
		if(flag1){cout<<i<<endl;}
		if(flag2){cout<<i<<endl;}
		if(flag1 || flag2){
			ans++;
		}
	}
	cout <<ans<<endl;
	
}