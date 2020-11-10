#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    int arr[200];
    int dp[200];
    memset(arr,0,sizeof(arr));
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        dp[i] = 1;
        for(int j=0; j<i; j++){
            if(arr[i]>arr[j] && dp[i]<dp[j]+1 ){
                dp[i] = dp[j]+1;
            }
        }
    }
    int max = -1;
    for(int i=0; i<n; i++){
        if(dp[i]>max){
            max = dp[i];
        }
    }
    cout << n-max<<endl;
    

}