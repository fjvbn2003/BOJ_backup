#include <iostream>
#include <algorithm>
using namespace std;
int arr[501][501];
long long dp[501][501];
int main(){
    int n,t;
    cin>> n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cin>>t;
            arr[i][j] = t;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            //트리의 첫번째 원소
            if(j==0){dp[i][0]= dp[i-1][0]+arr[i][0];}
            //트리의 마지막 원소
            else if(j+1==n){dp[i][j] = dp[i-1][j-1]+arr[i][j];}
            else{
                dp[i][j] = arr[i][j]+ max(dp[i-1][j-1], dp[i-1][j]);
            }
        }
    }


    // 디버깅용. dp 트리 출력
    // for(int i=1; i<=n; i++){
    //     for(int j=0; j<i; j++){
    //         cout <<dp[i][j]<<" ";
    //     }
    //     cout << endl;
    // }
    long long max_el=0;
    for(int i=0; i<n; i++){
        if(dp[n][i]>max_el){
            max_el = dp[n][i];
        }
    }
    cout << max_el<<endl;

}