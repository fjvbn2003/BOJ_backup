#include <iostream>

using namespace std;

int main(){
	int arr[5];
	int min = 101;
	for(int i=0; i<5; i++){
		cin>> arr[i];
		if(arr[i]<min) min = arr[i];
	}
	int cnt = 0;
	while(1){
		cnt = 0;
		for(int i=0; i<5; i++){
			if(min%arr[i] ==0){
				cnt++;
			}
		}
		if(cnt>=3){break;}
		min++;
	}
	cout <<min<<endl;
}