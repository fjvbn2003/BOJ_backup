#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n,m;
int dx[3] = {0, 1, 1};
int dy[3] = {1, 0, 1};
int arr[1000][1000];
int dp[1000][1000];
void DFS(int x, int y){
    queue<pair<int,int> > q;
    pair<int, int> p;
    int nx, ny;
    q.push({x,y});
    dp[x][y] = arr[x][y];
    while(!q.empty()){
        p = q.front(); q.pop();
        for(int i=0; i<3; i++){
            nx = p.first + dx[i];
            ny = p.second + dy[i];
            if(nx <n && ny<m){
                dp[nx][ny] = (dp[nx][ny] < dp[p.first][p.second]+arr[nx][ny])? dp[p.first][p.second]+arr[nx][ny] : dp[nx][ny]; 
                q.push({nx, ny});
            }
        }
    }
}

int main(){
    cin >> n>>m;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    DFS(0,0);
    cout <<dp[n-1][m-1];
}