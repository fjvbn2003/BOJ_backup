#include <iostream>
using namespace std;

int main(){
    int dp[1001];
    int n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 0;
    dp[4] = 1;
    for(int i=5; i<=n; i++){
        if(dp[i-3] == 1){
            dp[i] = 0;
        }else{
            dp[i] = 1;
        }
    }
    if(dp[n] == 1){
        cout <<"SK"<<endl;
    }else{
        cout <<"CY"<<endl;
    }
    

}