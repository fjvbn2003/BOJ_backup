#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
// dfs는 사용하면 안됨
// int dfs(int x, int step){
//     //cout <<"x is "<<x<<" step is: "<<step<<endl;
//     if(x<1 || x>f){return INT_MAX;}
//     if(x == g){
//         return step;
//     }
//     int ans = min(dfs(x+u,step+1),dfs(x-d,step+1));
//     return ans;
// }
// 그리디 방식으로 접근해도 문제가 생김.

// bfs로 접근하기.
int f,s,g,u,d;
bool memo[1000001];
int bfs(){
    queue<pair<int,int>> q;

    q.push({s,0});
    memo[s] = true;
    while(!q.empty()){
        int x = q.front().first;
        int step = q.front().second;
        q.pop();
        if(x==g){return step;}
        int ux = x+u;
        int dx = x-d;
        if( ux<=f && memo[ux]==false){
            q.push({ux,step+1});
            memo[ux] = true;

        }else if(dx>0 && memo[dx]==false){
            q.push({dx,step+1});
            memo[dx] = true;

        }else{
            continue;
        }
    }
    return -1;

}
int main(){
    memset(memo, false, sizeof(memo));
    cin >> f>>s>>g>>u>>d;
    int ans = bfs();
    if(ans == -1){cout << "use the stairs"<<endl;}
    else{
        cout << ans<<endl;
    }
}