#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector <int> g[32001];
int indegree[32001];
int visited[32001];
int n,m;
int topology(int a){
    if(visited[a]){return 0;}
    priority_queue <int> q;
    q.push(-a);
    while(!q.empty()){
        int v = -q.top(); q.pop();
        visited[v] = 1;
        cout << v <<" ";
        for(int i=0; i<g[v].size(); i++){
            indegree[g[v][i]]--;
            if(indegree[g[v][i]]==0 && visited[g[v][i]]!=1){
                q.push(-g[v][i]);
            }
        }
    }
    return 0;
}
int main(){
    int a, b;
    cin >> n>>m;
    for(int i=0; i<m; i++){
        cin >> a>> b;
        g[a].push_back(b);
        indegree[b]++;
    }
    for(int i=1; i<=n; i++){
        if(indegree[i]==0){
            //cout << "hi : "<< i<<endl;
            topology(i);
        }
    }
    cout <<endl;

}
