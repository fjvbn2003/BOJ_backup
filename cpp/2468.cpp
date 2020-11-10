#include <iostream>
#include <string.h>
using namespace std;
int n;
int arr[100][100]={0};
int memo[100][100]={0};
int dy[4] = {0,0,1,-1};
int dx[4] = {1,-1,0,0};
int dfs(int y, int x){
    if(memo[y][x] == 1){return 0;}
    memo[y][x]  =1;
    for(int i=0; i<4; i++){
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(ny>=0 && ny<n && nx>=0 && nx<n && memo[ny][nx]==0){
            dfs(ny, nx);
        }
    }
    return 1;
}
int main(){
    int minval = 101;
    int maxval = -1;
    cin>> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> arr[i][j];
            if(arr[i][j]<minval){minval = arr[i][j];}
            if(arr[i][j]>maxval){maxval = arr[i][j];}
        }
    }
    int ans = 1;
    for(int m=minval; m<=maxval; m++){
        int k = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(arr[i][j]<=m){
                    memo[i][j] = 1;
                }else{
                    memo[i][j] = 0;
                }
            }
        }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         cout <<memo[i][j]<<" ";
        //     }
        //     cout <<endl;
        // }
        

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(memo[i][j]==0){
                    k += dfs(i,j);
                }
            }
        }
        //cout <<m<<" "<<k<<endl;
        if(ans<k){ans = k;}
                
    }
    cout <<ans<<endl;
}