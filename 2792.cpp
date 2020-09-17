#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool desc(long long a, long long b){
return a>b;
}
int main(){
    long long n,m,sum,t;
    vector<long long> arr;
	cin>> n>>m;
	sum = 0;
	for(int i=0; i<m; i++){
		cin>>t;	
		sum+=t;
		arr.push_back(t);
	}
	long long max_cnt = -1;
	double p;
	long long s;
	long long remain_s = n;
	double tic = 0;
	sort(arr.begin(), arr.end(), desc);
	for(int i=0; i<m; i++){
		 p = (double)arr[i]/sum;
		//자잘이를 어떻게 처리할 것인가. 반올림??
	
		 s = p*n;
		remain_s -=s;
		//이 방식으로는 안됨. remain_s 가 1 이상이되기 때문이다.
		if(i==m-1 && remain_s>0){
			s+= remain_s;
		}
		if(arr[i]%s == 0){
			max_cnt = (max_cnt>arr[i]/s)? max_cnt : arr[i]/s;
		}else{
			max_cnt = (max_cnt>arr[i]/s+1)? max_cnt : arr[i]/s+1;

		}
//		cout << arr[i]<< " " << max_cnt<<endl;
	}
	cout << max_cnt<<endl;
}
