#include <iostream>
#include <vector>
using namespace std;
// dp[n][k] n번째 동전까지 가지고 k를 만드는 법
// 점화식 dp[i][j] = dp[i-1][j] + dp[i][j-arr[i]]
int dp[10001];
int coin[101];
int main(){
    int n, k;
    cin >> n>>k;
    for(int i=1; i<=n; i++){
        cin >> coin[i];
    }
    dp[0] =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(j-coin[i] >=0){
                dp[j] = dp[j-coin[i]] + dp[j];
            }
        }
    }
    cout << dp[k]<<endl;

}