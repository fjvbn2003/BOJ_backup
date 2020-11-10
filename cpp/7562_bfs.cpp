#include <iostream>
#include <queue>

using namespace std;


bool visited [301][301];
int cache[301][301];
int d_x[8] = {2,1,-2,-1,2,1,-2,-1};
int d_y[8] = {1,2,1,2,-1,-2,-1,-2};

int l;
int INF = 987654321;


int bfs(pair<int, int> a, pair<int, int> b){
    visited[a.first][a.second] = true;
    queue<pair<int,int> > q;
    pair<int, int> cur;
    q.push(a);
    cache[a.first][a.second] = 0;
    while(!q.empty()){

        cur = q.front();
        int x  = cur.first;
        int y  = cur.second;
        q.pop();
        if(cur == b) return cache[b.first][b.second];
        for(int i=0; i<8; i++){
            if(x+d_x[i]>=0 && x+d_x[i]<l&&0<=y+d_y[i]&&  y+d_y[i]<l && !visited[x+d_x[i]][y+d_y[i]]){
                q.push(make_pair(x+d_x[i],y+d_y[i]));
                visited[x+d_x[i]][y+d_y[i]]  =true;
                cache[x+d_x[i]][y+d_y[i]] = min(cache[x+d_x[i]][y+d_y[i]], cache[x][y]+1);
            }
        }
    }
}


int main(){
    int n;
    cin>> n;
    pair<int,int> from, to;
    while(n--){
        for(int i=0; i<301; i++){
            for(int j=0; j<301; j++){
                visited[i][j] = false;
                cache[i][j]  = INF;
            }
        }
        cin>> l>> from.first>> from.second>>to.first>>to.second;
        cout << bfs(from, to)<<endl;
    }
}