#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> arr[501];
int visited[501];
int BFS(int a){
    queue<int> q;
    visited[a] = true;
    q.push(a);
    while(!q.empty()){
        int f = q.front(); q.pop();
        for(int i=0; i<arr[f].size(); i++){
            if(visited[arr[f][i]]==0){
                visited[arr[f][i]] = visited[f]+1;
                q.push(arr[f][i]);
            }
        }
    }
    return 0;

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
    BFS(1);
    int count = 0;

    for(int i=1; i<=n; i++){
        if(visited[i]==3 || visited[i]==2){count++;
            //cout <<"i: "<<i<<"visited : "<< visited[i]<<endl;
        }
    }
    cout <<count<<endl;
}