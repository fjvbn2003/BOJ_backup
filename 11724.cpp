#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> arr[1001];
int visited[1001];
int BFS(int a){
    if(visited[a]){return 0;}
    queue<int> q;
    visited[a] = true;
    q.push(a);
    while(!q.empty()){
        int f = q.front(); q.pop();
        for(int i=0; i<arr[f].size(); i++){
            if(visited[arr[f][i]]==0){
                visited[arr[f][i]] = 1;
                q.push(arr[f][i]);
            }
        }
    }
    return 1;
}


int main(){
    int n, a,b;
    int m;
    cin>> n>>m;
    for(int i=0; i<m; i++){
        cin >>a>> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int count = 0;
    for(int i=1; i<=n; i++){
        count += BFS(i);
    }
    cout <<count<<endl;
}   