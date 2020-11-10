#include <iostream>
using namespace std;
long long arr[31][31];
int main(){
    int t;
    int n, m;
    cin>> t;
    for(int i=1;i<=30; i++ ){
        arr[1][i] = i;
    }
    // i==j 원소
    for(int i=1;i<=30; i++ ){
        arr[i][i] =1;
    }
    while(t--){
        cin >> n>>m;
        // 첫째 줄

        for(int i=2; i<=n; i++){
            for(int j=i+1; j<=m; j++){
                arr[i][j] = arr[i][j-1]+arr[i-1][j-1];
            }
        }
        cout <<arr[n][m]<<endl;
    }
    
}