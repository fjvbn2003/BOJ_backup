#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool rev(int a, int b){
	return a>b;
}
int main(){
	int n,t;
	vector<int> arr;
	cin>> n;
	for(int i=0; i<n; i++){
		cin>>t;
		arr.push_back(t);
	}
	sort(arr.begin(), arr.end(), rev);
	int ans=0;
	for(int i=0; i<n; i++){
		if(arr[i]>=i+1){
			ans = i+1;
		}
	}
	cout <<ans<<endl;
	
}