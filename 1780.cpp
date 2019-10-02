#include <iostream>
using namespace std;
int arr[2187][2187];
// ans[0] -1갯수 , ans[1] 0의 갯수, ans[2] 의 갯수
int ans[3];

void solve(int x, int y, int len){
    int k = arr[x][y];
    bool flag = false;

    if(len==1){
        ans[k+1]++;
        return ;
    }
    for(int i=x; i<x+len; i++){
        for(int j=y; j<y+len; j++){
            if(arr[i][j] != k){
                int d = len/3;
                solve(x,y,d);
                solve(x+d,y,d);
                solve(x+d+d, y, d);
                solve(x,y+d,d);
                solve(x,y+d+d,d);
                solve(x+d,y+d,d);                
                solve(x+d+d,y+d,d);
                solve(x+d,y+d+d,d);
                solve(x+d+d,y+d+d,d);
                flag = true;
                break;
            }
        }
        if(flag){break;}
    }
    if(!flag){
        ans[k+1]++;
    }

}

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> arr[i][j];
        }
    }
    solve(0,0,n);
    for(int i=0; i<3; i++){
        cout << ans[i]<<endl;
    }
}