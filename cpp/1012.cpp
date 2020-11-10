#include <iostream>
#include <vector>
using namespace std;
int a,b, m,n,k;
int count;
int arr[50][50];
int memo[50][50];
//상하좌우
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};


int DFS(int x, int y){
    if(arr[x][y]==0 || memo[x][y]== 1){return 0;}
    memo[x][y] = 1;
    //cout << "x , y : " << x<< " "<<y<< endl; 
    for(int i=0; i<4; i++){
        int n_x = x+dx[i];
        int n_y = y+dy[i];
        if(0<=n_x && n_x<m && 0<=n_y && n_y<n && arr[n_x][n_y]==1 && memo[n_x][n_y]!=1){
            //cout <<" call "<<n_x<<" "<<n_y<<endl;
            DFS(n_x, n_y);
        }
    }
    return 1;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        //initialize arrays
        count = 0;
        for(int i=0; i<50; i++){
            for(int j=0; j<50; j++){
                arr[i][j]=0; memo[i][j] = 0;
            } 
        }
        cin >> m>>n>>k;
        for(int i=0; i<k;i++){
            cin>>a>>b; arr[a][b]=1;
        }
        count = 0;
        for(int i=0; i<50; i++){
            for(int j=0; j<50; j++){
                count += DFS(i,j);
            }
        }
        cout << count<<endl;
    }
    

}