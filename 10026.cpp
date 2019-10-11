#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int n;
int arr[100][100];
int memo[100][100];
int dy[4] = {0,0,1,-1};
int dx[4] = {1,-1,0,0};
int dfs(int y , int x){
    if(memo[y][x]){return 0;}
    memo[y][x] = 1;
    for(int i=0; i<4; i++){
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(ny>=0 && ny<n && nx>=0&& nx<n && arr[y][x]==arr[ny][nx] &&memo[ny][nx]==0){
            dfs(ny,nx);
        }
    }
    return 1;

}
int main(){
    string s;
    cin >>n;
    for(int i=0; i<n; i++){
        cin>> s;
        for(int j=0; j<n; j++){
            arr[i][j] = s[j];
        }
    }
    // 일반인
    int g = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            g+=dfs(i,j);
        }
    }

    //적녹 색약 적 -> 녹
    int o = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]=='R')
            {
                arr[i][j] = 'G';
            }
        }
    }
    memset(memo, 0, sizeof(memo));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            o+=dfs(i,j);
        }
    }
    cout <<g<<" "<<o<<endl;
}