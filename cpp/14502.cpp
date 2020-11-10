#include <iostream>
#include <string.h>
using namespace std;
int n,m;
int arr[8][8];
int memo[8][8];
int dy[4] = {0,0,1,-1};
int dx[4] = {1,-1,0,0};
int ans = 0;
void dfs(int y, int x){
    if( arr[y][x] ==  1 || memo[y][x] == 1){
        return;
    }
    memo[y][x] = 1;
    for(int i=0; i<4; i++){
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(ny>=0 && ny<n && nx>=0 & nx<m && arr[ny][nx]==0 && memo[ny][nx]==0){
            dfs(ny,nx);
        }
    }

}

void make_wall(int cnt){
    if(cnt == 3){
        memset(memo, 0, sizeof(memo));
        for(int i=0; i<n;i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]==2){
                    dfs(i,j);
                }
                //cout <<arr[i][j]<<" ";
            }
            //cout <<endl;
        }
        //cout <<endl;
        // 카운트 세기
        // 셀 때는 arr이 벽인 것 제외하기
        int cnt = 0;
        for(int i=0; i<n;i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]==0 && memo[i][j]== 0){
                    cnt++;
                }
            }
        }
        if(cnt >ans){ans = cnt;}
        return;
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0){
                arr[i][j] = 1;
                make_wall(cnt+1);
                arr[i][j] =0;
            }
        }
    }


}

int main(){
    cin >> n>>m;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin>> arr[i][j];
        }
    }
    make_wall(0);
    cout <<ans<<endl;
    // for(int i=0; i<n;i++){
    //     for(int j=0; j<m; j++){

    //     }
    // }

}