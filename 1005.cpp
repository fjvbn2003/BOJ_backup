#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int g[1001][1001];
int weights[1001];
int dp[1001];
int indegree[1001];
queue<int> q;
int n, k, a, b, goal;

void DFS(){
    while(!q.empty()){
        int v = q.front(); q.pop();
        //cout <<v<<" "; 
        for(int i=1; i<=n; i++){

            if(g[v][i]){
                if(dp[i]< dp[v]+weights[i]){
                    //cout <<" at v: "<< v<<" i: "<<i<<" "<<dp[v]+ weights[i] <<" <- "<< dp[v] <<" + "<< weights[i]<<endl; ;
                    dp[i] = dp[v]+weights[i];
                }
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
            
        }

    }

}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n>>k;
        for(int i=0; i<1001; i++){indegree[i]=0;weights[i]=0; dp[i]=0;}
        for(int i=0; i<1001; i++)
            for(int j=0; j<1001; j++)
                g[i][j] =0;
        // 가중치 입력
        for(int i=1; i<=n ;i++){
            cin>> weights[i];
            dp[i] = weights[i];
        }
        // 방향 그래프 입력
        for(int i=1; i<=k;i++){
            cin>> a>> b;
            indegree[b]++;
            g[a][b] =1;
        }
        cin>> goal;
        for(int i=1; i<=n;i++){
            if(indegree[i]==0){q.push(i);}
        }
        DFS();
        cout <<dp[goal]<<endl;
    }
    
}