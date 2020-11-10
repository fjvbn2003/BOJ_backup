#include <iostream>
#include <queue>
using namespace std;
int m,n;
int arr[500][500];
int dp[500][500];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int ans;
void bfs(){
    dp[0][0] = 1;
    queue<pair <int,int> > q;
    q.push({0,0});
    while(!q.empty()){
        pair<int,int> p = q.front(); q.pop();
        for(int i=0; i<4; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(nx>=0 && nx <m && ny>=0 && ny<n && arr[nx][ny]<arr[p.first][p.second]){
                dp[nx][ny] += dp[p.first][p.second];
                if(nx==2 && ny==3){cout <<p.first <<" "<< p.second<<endl;}
                if(nx == m-1 && ny == n-1){ans++;continue;}
                q.push({nx,ny});
            }
        }
    }
}
int main(){
    cin >> m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    bfs();
    //디버깅용 dp 출력
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << dp[i][j]<<" ";
        }
        cout <<endl;
    }
    cout << dp[m-1][n-1];
    cout << ans<<endl;

}