#include <iostream>
#include <queue>

using namespace std;
int n, k;
int cnt =0;
int visited[100001] = {0,};
queue<int> q;

int bfs(){
    q.push(n);
    visited[n]=true;
    int depth =0;
    while(!q.empty()){
        int s = q.size();
        for(int i=0; i<s; i++){
            int cur = q.front();
            q.pop();
            if(cur == k ){
                //cout <<"return "<< depth<<endl;
                return depth;
            }
            if(cur-1 >=0 && cur-1 <100001&&!visited[cur-1] ){
                visited[cur-1] = 1;
                q.push(cur-1);
                //cout <<cur -1<< " ";
            }
            if(cur+1 >=0 && cur+1 <100001&&!visited[cur+1] ){
                visited[cur+1] = 1;
                q.push(cur+1);
                //cout <<cur +1<< " ";

            }
            if( cur*2 >=0 &&cur*2 <100001&&!visited[cur*2] ){
                visited[cur*2] = 1;
                q.push(cur*2);
                //cout <<cur*2<< " ";

            }
        }
        //cout <<endl;
        depth++;
    }
}

int main(){
    cin>> n>>k;

    cout <<bfs()<<endl;
}