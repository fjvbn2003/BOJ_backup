#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(pair<int,int> &a,pair<int,int> &b ){
	return a.first < b.first;
}
int main(){
	int n, a, b;
	vector<pair<int, int> > arr;
	cin >> n;
	int dp[n];
	int ans[n];
	for(int i=0; i<n; i++){dp[i] = 1; ans[i]= -1;}
	for(int i=0; i< n; i++){cin >> a>>b; arr.push_back({a,b});}
	// 첫번 째 값으로 정렬.
	sort(arr.begin(), arr.end(), comp);
	// 두번째 값에서 longest increasing sequence를 찾으면 됨.
	int len_arr = arr.size();
	dp[0] = -1;
	for(int i=1; i< len_arr; i++){
		for(int j=0; j<i; j++){
			int m_idx = -1;
			int m_val = 1;
			if(arr[j].second < arr[i].second){
				if(dp[j]>= m_val){
					m_val = dp[j]+1; m_idx = j;
				}
			}
			dp[i] = m_val; ans[i] = m_idx;
		}
	}
	// for(int i=0; i< len_arr; i++){
	// 	cout << dp[i]<<" "; 
	// }
	// cout <<endl;
	// for(int i=0; i< len_arr; i++){
	// 	cout << arr[i].first<<" "; 
	// }
	// cout <<endl;
	cout <<dp[n-1]<<endl;
	for(int i=0; i<n; i++){
		if(ans[i] == -1){
			cout << arr[i].first<<endl;
		}
	}
}