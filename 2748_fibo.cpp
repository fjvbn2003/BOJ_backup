#include <iostream>

using namespace std;
long long dp[100];
long long fibo(int a){
    if(dp[a]!=0){
        return dp[a];
    }
    if(a==0){
        return 0;
    }
    else{
        dp[a] = fibo(a-1)+fibo(a-2);
        return dp[a];
    }
}

int main(){
    int n;
    cin >> n;
    dp[0] = 0;
    dp[1] = 1;
    cout<<fibo(n)<<endl;

}