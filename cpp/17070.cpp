#include <iostream>
using namespace std;
int n;

int arr[16][16] = {0};
int dp[16][16][3] = {0};
int dfs(int y, int x, int dir){
    if(arr[y][x] == 1){return 0;}
    if(x<0 || y<0 || x>=n || y>=n){return 0;}
    if(dp[y][x][dir] !=0){return dp[y][x][dir];}
    if(y==n-2 && x == n-2 && dir ==2){return 1;}
    if(y==n-1 && x==n-2 && dir == 0){return 1;}
    if(y==n-2 && x==n-1&& dir==1){return 1;}
    //cout <<"y: "<<y<<" x: "<<x<<" dir: "<<dir<<endl;

    int k = 0;
    // 가로
    if(dir==0){
        if(x+1 >= n || arr[y][x+1] == 1){return 0;}
        //오른쪽으로 한칸
        int t;

        t =dfs(y,x+1,0);
        k+= t;
        //cout <<"y: "<< y<< " x: "<<x<<" dir: "<<dir<<" t:"<< t<<endl;

        //diagonal direction
        t=dfs(y,x+1, 2);
        k+=t;
        //cout <<"y: "<< y<< " x: "<<x<<" dir: "<<dir<<" t:"<< t<<endl;
    }else if(dir == 1){
        if(y+1 >=n || arr[y+1][x]==1){return 0;}
        //밑으로 한칸
        int t;
        t = dfs(y+1,x,1);
        k+=t;
        //cout <<"y: "<< y<< " x: "<<x<<" dir: "<<dir<<" t:"<< t<<endl;

        //diagonal direction
        t= dfs(y+1,x,2);
        //cout <<"y: "<< y<< " x: "<<x<<" dir: "<<dir<<" t:"<< t<<endl;
        k+= t;
    }else{
        if(y+1 >=n || x+1 >=n || arr[y+1][x]==1 || arr[y][x+1]==1 || arr[y+1][x+1]==1){
            
            return 0;
        }
        int t;
        t = dfs(y+1,x+1,0);
        //cout <<"y: "<< y<< " x: "<<x<<" dir: "<<dir<<" t:"<< t<<endl;
        k+=t;
        t = dfs(y+1,x+1,1);
        //cout <<"y: "<< y<< " x: "<<x<<" dir: "<<dir<<" t:"<< t<<endl;
        k+=t;
        t = dfs(y+1,x+1,2);
        //cout <<"y: "<< y<< " x: "<<x<<" dir: "<<dir<<" t:"<< t<<endl;
        k+=t;

    }
    dp[y][x][dir] = k;
    return k;
}

int main(){
    cin >> n;

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cin>> arr[i][j];
        }
    }
    // (y,x, 방향) 가로:0, 세로 1, 비스듬한 것 2
    dfs(0,0,0);    
    int ans =dp[0][0][0];
    
    // cout <<endl;
    // for(int k=0; k<3; k++){
    //     for(int i=0; i<n;i++){
    //         for(int j=0; j<n; j++){
    //             cout <<dp[i][j][k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     cout <<endl;
    // }

    cout <<ans<<endl;
}