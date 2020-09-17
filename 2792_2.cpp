#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int main(){
	//banary search
	long long n,m,t;
	vector<long long> arr;
	long long low=0;
	long long high=1;
	long long ans= 300001;
	cin>> n>>m;

	for(long long i=0; i<m; i++){
		cin>>t;
		arr.push_back(t);	
		high = max(high,t);
	}

	while(low<=high){
		long long mid = (low+high)/2;
		long long n_remain = n;
		for(long long i=0; i<m; i++){
			n_remain -= arr[i]/mid;
			if(arr[i]%mid){
				n_remain--;
			}
		}
		if(n_remain>=0){
			ans = min(ans, mid);
			high = mid-1;
		}else{
			low = mid+1;
		}
	//	cout <<"low:"<< low<< " high:"<< high<<" mid:"<<mid<<" ans:"<<ans<<endl;
	}
	cout <<ans<<endl;
}
