#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[100][100];
int memo[100][100];
int dy[4] = {0,0,1,-1};
int dx[4] = {1,-1,0,0};
int m,n;

int dfs(int y, int x){
    if(memo[y][x]){
        return 0;
    }
    memo[y][x] = 1;
    int a = 1;
    for(int i=0; i<4; i++){
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(ny >=0 && ny<m && nx >=0 && nx <n && memo[ny][nx] == 0){
            a+=dfs(ny,nx);
        }
    }
    return a;
}


int main(){
    int k;
    int x1,y1,x2,y2;
    vector<int> ans2;
    cin >>m>>n>>k;
    for(int i=0; i<k; i++){
        cin>> x1>>y1>>x2>>y2;
        for(int j = x1; j<x2; j++){
            for(int k = y1; k<y2; k++){
                arr[k][j] = 2;
                memo[k][j] = 2;
            }
        }
    }
    int ans =0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] != 2){
                int k = dfs(i,j);
                if(k){
                    ans2.push_back(k);
                }
            }
            
        }
    }
    sort(ans2.begin(), ans2.end());
    cout << ans2.size()<<endl;
    for(int i=0; i< ans2.size(); i++){
        cout << ans2[i]<<" ";
    }
    cout <<endl;
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout <<memo[i][j]<<" ";;
    //     }
    //     cout <<endl;
    // }
    

}