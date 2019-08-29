#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
vector<pair<int,int> > arr[1001];
int visited[1001];
int dist[1001];
int main(){
    int n,m,a,b,w;
    int source, goal;
    cin>> n>>m;
    for(int i=0; i<m; i++){
        cin >> a>>b>> w;
        arr[a].push_back(make_pair(b,w));
    }
    cin >> source >> goal;
    //initialization dist
    for(int i=1; i<=n; i++){dist[i] = INT_MAX;}
    dist[source] = 0;
    // for(int i=1; i<=n; i++){
    //     cout << i<<" : "<< dist[i] <<" ";
    // }
    for(int i=1; i<=n;i++){
        // find minimum index;
        int min_dist_idx = 1;
        int min_dist = INT_MAX;
        for(int j=1; j<=n; j++){
            if(!visited[j] && min_dist>=dist[j]){
                min_dist_idx = j; min_dist = dist[j];
                //cout <<"min_dist: "<<min_dist<< " min_dist_idx: "<< min_dist_idx<<endl;
            }
        }
        int u = min_dist_idx;
        //cout <<"u: "<<u<<endl;
        visited[u] = true;
        for(pair<int,int> p : arr[u]){
            //cout << "u: "<< u<<" p.first: "<< p.first<<" p.second: "<< p.second<< " dist[p.first]: "<< dist[p.first]<<" dist[u]: "<< dist[u]<<endl;

            if(!visited[p.first]){
                
                if(dist[p.first] > dist[u]+ p.second){
                    dist[p.first] = dist[u]+ p.second;
                }
            }
        }
    }
    // for(int i=1; i<=n; i++){
    //     cout << i<<" : "<< dist[i] <<" ";
    // }
    cout <<dist[goal]<<endl;
    

}