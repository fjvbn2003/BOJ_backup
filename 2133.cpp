#include <iostream>
using namespace std;

int main(){
    int n;
    int dp[31];
    cin >> n;
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 3;
    dp[4] = 11;
    for(int i=5; i<31; i++){
        // 홀수 일 때
        if(i%2 ==1){dp[i] = 0; continue;}
        // 짝수 일 때
        int b = 4;
        dp[i] = dp[i-2]*3 +2;
        while(i-b>0){
            dp[i]+= dp[i-b]*2;
            b+=2;
        }
    }
    cout << dp[n]<<endl;
}