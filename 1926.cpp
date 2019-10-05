#include <iostream>
using namespace std;
int n, m;
int arr[500][500] = {0};
int memo[500][500] = {0};
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int dfs(int y, int x){
    if(arr[y][x] == 0 || memo[y][x] != 0){
        return 0;
    }
    memo[y][x] = 1;
    int k = 1;
    for(int i=0; i<4; i++){
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(ny >=0 && ny <n && nx >=0 && nx <m &&arr[ny][nx]== 1 && memo[ny][nx] == 0 ){
            k += dfs(ny,nx);
        }
    }
    return k;
}

int main(){
    cin >>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> arr[i][j];
        }
    }
    int cnt = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int k = dfs(i,j);
            if(k){
                cnt++;
                if(k>ans){
                    ans  = k;
                }
            }
        }
    }
    
    cout << cnt<<endl;
    cout <<ans<<endl;
}