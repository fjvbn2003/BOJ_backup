#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#include <cmath>
using namespace std;
vector<int> arr[101];
int memo[101];
bool flag = false;
int ans = -1;
int dfs(int p, int c, int cnt){
    //cout <<"p "<<p<<" c "<< c<<" cnt: "<<cnt<<endl;
    memo[p] = 1;
    if(c==p){ans = cnt;return cnt;}
    int z = cnt;
    int flag = false;
    for(int i=0; i<arr[p].size(); i++){
        if(memo[arr[p][i]]==0){
            dfs(arr[p][i],c, cnt+1);
        }
    }
    
    return z;
}

int main(){
    int n, m;
    int x,y;
    int a,b;
    cin>>n>>x>>y>>m;
    for(int i=0; i<m; i++){
        cin>> a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    dfs(x,y,0);
    cout <<ans<<endl;


}