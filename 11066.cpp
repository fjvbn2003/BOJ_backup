#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int arr[501];
int sum[501];
//dp[a][b]는 a에서 b까지의 합
int dp[501][501];
int search(int a, int b){
    //cout << "a: "<<a<<"~ b: "<<b<<endl;
    if(a==b){return arr[a];}
    if(dp[a][b]){return dp[a][b];}
    int tmp = INT_MAX;
    for(int i=a; i<b; i++){
        int k = search(a,i) + search(i+1,b) ;
        if(k<tmp){tmp = k;}
    }
    if(a==0){tmp+=sum[b];}
    else{tmp+= (sum[b]-sum[a-1]);}
    //cout << "a: "<<a<<"~ b: "<<b<<" return is: "<<tmp<<endl;
    return dp[a][b] = tmp;
}

int main(){
    int t;
    cin >> t;
    while(t){
        int k;
        for(int i=0; i<501; i++){arr[i]=0; sum[i]=0;}
        for(int i=0; i<501; i++)
            for(int j=0; j<501; j++)
                dp[i][j] = 0;
        cin >> k;
        for(int i=0; i<k; i++){
            cin >> arr[i];
            dp[i][i] = arr[i];
        }
        sum[0] = arr[0];
        for(int i=1; i<k; i++){
            sum[i] = sum[i-1]+arr[i];
        }
        cout <<search(0,k-1)-sum[k-1]<<"\n";
        t--;
    }
    
}