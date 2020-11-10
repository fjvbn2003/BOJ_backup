#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int n,m;
vector<pair<int,int> > g[1001];
priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;
bool visited[1001];

int main(){
    int a,b,c;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>a>>b>>c;
        g[a].push_back({c,b});
        g[b].push_back({c,a});
    }
    pq.push({0,1});
    int result = 0;
    while(!pq.empty()){
        int cost = pq.top().first;
        int vertex = pq.top().second;
        pq.pop();
        if(!visited[vertex]){
            visited[vertex] = true;
            result +=cost;
            for(int i=0; i<g[vertex].size(); i++){
                int nextCost = g[vertex][i].first;
                int nextVertex = g[vertex][i].second;
                if(!visited[nextVertex]){
                    pq.push({nextCost,nextVertex});
                }
            }
        }
    }
    cout <<result<<endl;
}