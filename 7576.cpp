#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int M, N;
int arr[1001][1001];
bool visited[1001][1001];
int d_x[4] = {1,-1,0,0};
int d_y[4] = {0,0,-1,1};
int dp[1001][1001];
vector<pair<int,int> > memo;


int bfs(int a, int b){
    int cnt = 0;
    for(int i=0; i< N; i++){
        for(int j=0; j< M; j++){
            visited[i][j] = false;
        }
    }
    queue<pair<int,int> > q;
    dp[a][b] = 0;
    //cout <<memo.size()<<endl;
    q.push(make_pair(a,b));
    while(!q.empty()){
        int q_s = q.size();
        for(int j=0; j <q_s; j++)
        {
            pair<int, int> cur = q.front();
            q.pop();
            visited[cur.first][cur.second] = true;
            //cout <<"queue out:"<<cur.first<<" "<<cur.second<<endl;
            dp[cur.first][cur.second] = min(dp[cur.first][cur.second],cnt);
            for(int i=0; i<4; i++){
                int n_x = cur.first + d_x[i];
                int n_y = cur.second +d_y[i];
                if(n_x>=0 && n_x <=M && n_y >=0 && n_y<=N && !visited[n_x][n_y]){
                    q.push(make_pair(n_x, n_y));
                }
            }
        }
        cnt++;

    }
    return cnt;

}


int main(){
    int a;
    cin>> M>> N;

    for(int i=0; i<= N; i++){
        for(int j=0; j<= M; j++){
            dp[i][j] = 10000;
        }
    }
    for(int i=0; i<=N; i++){
        for(int j=0; j<= M; j++){
            cin>>a;
            if(a == 1){
                //cout <<"push memo "<< i<<j<<endl;
                memo.push_back(make_pair(i,j));
            }
            arr[i][j] = a;
        }
    }
    for(int i=0; i<memo.size(); i++){
        bfs(memo[i].first, memo[i].second);
    }

    int max =0;
    for(int i=0; i< N; i++){
        for(int j=0; j< M; j++){
            cout <<dp[i][j]<<" ";
            if(max<dp[i][j]){
                max = dp[i][j];
            }
        }
        cout <<endl;
    }
    cout <<max<<endl;



}