#include <iostream>

using namespace std;

// Longest increasing subsets
int main(){
    
    int n;
    int arr[1001];
    int dp[1001];
    cin>> n;
    for(int i=0; i< n; i++){
        cin>> arr[i];
    }
    dp[0]=1;
    for(int i=1; i<n; i++){
        int max_cnt= 0;
        for(int j=0; j< i;j++){
            if(arr[j]<arr[i] && max_cnt<dp[j]) max_cnt = dp[j];
        }
        dp[i] = max_cnt+1;
    }
    int m = 0;
    for(int i=0; i<n; i++){
        //cout << dp[i]<<" ";
        if(m<dp[i]){
            m  = dp[i];
        }
    }
    //cout <<endl;
    cout <<m<<endl;
    



}