#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    int arr[400];
    int dp[100001];
    cin >> n;

    for(int i=0; i< 400; i++){
        arr[i] = i*i;
    }
    dp[0] = 0;
    for(int i=1; i<=n;i++){
        int m = INT_MAX;
        for(int j=1; j<400; j++){
            if(i-arr[j]<0){
                break;
            }
            if(m > dp[i-arr[j]]){m = dp[i-arr[j]];}
        }
        dp[i] = m+1;
    }
    cout << dp[n]<<endl;
}