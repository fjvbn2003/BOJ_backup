#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
vector<pair<int,int> > arr[1001];
int visited[1001];
int dist[1001];
int dist_back[1001];
int main(){
    int n,m,x,a,b,w;
    int source;
    int max_commute = 0;
    cin>> n>>m>>x;
    for(int i=0; i<m; i++){
        cin >> a>>b>> w;
        arr[a].push_back(make_pair(b,w));
    }
    for(int i=1; i<=n; i++){dist_back[i] = INT_MAX;visited[i] = false;}
        dist_back[x] = 0;
        // for(int i=1; i<=n; i++){
        //     cout << i<<" : "<< dist[i] <<" ";
        // }
    for(int i=1; i<=n;i++){
            // find minimum index;
            int min_dist_idx = 1;
            int min_dist = INT_MAX;
            for(int j=1; j<=n; j++){
                if(!visited[j] && min_dist>=dist_back[j]){
                    min_dist_idx = j; min_dist = dist_back[j];
                    //cout <<"min_dist: "<<min_dist<< " min_dist_idx: "<< min_dist_idx<<endl;
                }
            }
            int u = min_dist_idx;
            //cout <<"u: "<<u<<endl;
            visited[u] = true;
            for(pair<int,int> p : arr[u]){
                //cout << "u: "<< u<<" p.first: "<< p.first<<" p.second: "<< p.second<< " dist[p.first]: "<< dist[p.first]<<" dist[u]: "<< dist[u]<<endl;

                if(!visited[p.first]){
                    
                    if(dist_back[p.first] > dist_back[u]+ p.second){
                        dist_back[p.first] = dist_back[u]+ p.second;
                    }
                }
            }
    }

    

    for(int q=1; q<=n; q++){
        //initialization dist
        for(int i=1; i<=n; i++){dist[i] = INT_MAX;visited[i] = false;}
        dist[q] = 0;
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
        


        if(max_commute< dist[x]+dist_back[q]){
            //cout <<"q: "<< q<< " to: "<<x<< "is : "<< dist[x]<<"+"<< dist_back[q]<<endl;
            max_commute = dist[x]+dist_back[q];
        }    
        

    }

    cout <<max_commute<<endl;
    

}