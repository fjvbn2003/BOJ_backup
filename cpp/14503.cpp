#include <iostream>
using namespace std;
int n, m;
int arr[50][50];
int memo[50][50];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int clean(int y,int x,int d){
    if(arr[y][x]==1){return 0;}
    memo[y][x] = 1;
    int k = 1;
    int t = 0;
    for(int i=0; i<4; i++){
        int ny = y+dy[(d+i)%4];
        int nx = x+dx[(d+i)%4];
        //cout <<ny<<" "<<nx<<endl;
        if(ny>=0 && ny<n && nx>=0 && nx<m && arr[ny][nx]==0 && memo[ny][nx]!=1){
            t += clean(ny,nx,(d+i)%4);
            //cout <<t<<endl;
        }
    }
    if(t ==0){
        int ny = y-dy[d];
        int nx = x-dx[d];
        //cout <<ny<<" "<<nx<<endl;
        if(ny>=0 && ny<n && nx>=0 && nx<m && arr[ny][nx]==0 && memo[ny][nx]!=1){
            t += clean(ny,nx,d);
        }
    }
    return k+t;

}
int main(){
    int r,c,d;
    cin >>n>>m;
    cin>> r>>c>> d;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin>> arr[i][j];
        }
    }
        

    cout <<clean(r-1,c-1,d)<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cout <<memo[i][j]<<" ";
        }
        cout <<endl;
    }
}