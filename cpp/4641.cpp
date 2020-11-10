#include <iostream>
#include <algorithm>
using namespace std;

int arr[201];

int main(){
	while(1){
		int t = 1;
		int max_t=0;
		int ans = 0;
		for(int i=0; i<201; i++)
			arr[i]= 0;
		while(t){
			cin>> t;
			if(t == -1) return 0;
			arr[t] = 1;
			if(max_t<t) 
				max_t = t;
		}
		for(int i=1; i<max_t; i++){
			if(arr[i] && arr[i*2] >0){
				//cout <<"hi: "<<i<<endl;
				ans++;
			}
		}
		cout <<ans<<endl;

	}

	

}