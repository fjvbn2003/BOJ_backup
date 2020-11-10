#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int arr[500][500];
int dp[500][500];
int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};

int dfs(int y, int x){
    if(dp[y][x] !=0 ){return dp[y][x];}
    int k=1;
    for(int i=0; i<4; i++){
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(nx>=0 && ny>=0 && nx<n && ny <n && arr[y][x]<arr[ny][nx]){
            k = max(k,dfs(ny,nx)+1);
        }
    }
    dp[y][x] = k;
    return k;
}


int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dfs(i,j);
        }
    }
    int ans = -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ans<dp[i][j]){ans = dp[i][j];}
        }
    }
    cout << ans<<endl;

}