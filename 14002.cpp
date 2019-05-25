#include <iostream>
#include <vector>
using namespace std;

// Longest increasing subsets
int arr[1001];
int dp[1001];
int main(){
    
    int n;
    vector<int> v;
    cin>> n;
    for(int i=0; i< n; i++){
        cin>> arr[i];
    }
    for(int i=1; i<n; i++){
        int m = 0;
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i] && m< dp[j]){
                m = dp[j];
            }
        }
        dp[i] = m+1;
    }

    cout <<v.size()<<endl;
    for(auto it : v){
        cout <<it<<" ";
    }
    cout <<endl;

}