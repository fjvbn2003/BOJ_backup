#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int m, n;
int dp[500][500];
int arr[500][500];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int dfs(int x, int y){
    if(dp[x][y] != -1){return dp[x][y];}
    dp[x][y] = 0;
    for(int i=0; i<4; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx>=0 && nx<m && ny>=0 && ny<n){
            if(arr[nx][ny]<arr[x][y] ){
                dp[x][y] += dfs(nx, ny);
            }
        }
    }
    return dp[x][y];

}

int main(){
    cin >> m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    memset(dp,-1,sizeof(dp));
    dp[m-1][n-1] = 1;
    dfs(0,0);
    cout << dp[0][0]<<endl;
}