#include <iostream>
//#include <vector>
using namespace std;
int n;
int arr[100][100];
long dp[100][100];
int dx[2] = {1,0};
int dy[2] = {0,1};
// 점화식
//vector<pair<int,int> > g[100][100];
long dfs(int x, int y){
    // 끝 노드 
    if(x==n-1 && y==n-1){return 1;}
    // 방문했던 노드
    if(dp[x][y]!=0){
        return dp[x][y];
    }
    if(arr[x][y]==0){
        return 0;
    }
    for(int i=0; i<2; i++){
        int nx = x + dx[i]*arr[x][y];
        int ny = y + dy[i]*arr[x][y];
        if(nx>=0 && nx <n &&ny>=0 && ny <n){
            dp[x][y] += dfs(nx, ny);
        }
    }
    return dp[x][y];


}

int main(){
    cin>> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    // make directed graph <- 메모리 초과
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i+arr[i][j] <n){(g[i][j]).push_back({i+arr[i][j],j});}
    //         if(j+arr[i][j] <n){(g[i][j]).push_back({i,arr[i][j]+j});}
    //     }
    // }

    cout << dfs(0,0)<<endl;
}