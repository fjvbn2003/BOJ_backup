#include <iostream>
using namespace std;
int dp[10001];
int main(){
    int n, k, tmp;
    int n_arr[101];
    cin>> n>>k;
    for(int i=0; i<n; i++){
        cin>> tmp;
        n_arr[i] = tmp;
    }
    // 초기화
    for(int i=0; i<=k; i++){dp[i] = k+1;}
    dp[0]=0;
    for(int i=0; i<n; i++){
        for(int j=n_arr[i]; j<=k; j++){
            dp[j] = min(dp[j], dp[j-n_arr[i]]+1);
        }
    }
    if(dp[k]==k+1){cout <<-1<<endl;return 0;}
    cout << dp[k]<<endl;
    

}