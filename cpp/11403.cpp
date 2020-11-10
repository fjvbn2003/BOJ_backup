#include <iostream>
using namespace std;
int n;

int g[101][101];
int visited[101];
bool cycle = false;
int DFS(int a, int k){
    if(visited[a]){return 0;}
    visited[a] = 1;
    for(int it=1; it<=n; it++){
        if(a==1){
            //cout << "at a==1, it : "<<it<<endl;
        }
        if(g[a][it] && it==k){
            //cout <<"hi cycle at :"<<a<<" -> "<<it<<endl;
            cycle = true;
            }
        if(g[a][it]!=0 && !visited[it]){
            DFS(it,k);
        }
    }
    return k;
}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
           cin>> g[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        cycle = false;
        for(int j=1; j<=n; j++){visited[j]=0;}
        DFS(i,i);
        //cout <<"cycle "<< i<<" "<< cycle<<endl;;
        if(cycle){visited[i] = 1;}
        else{visited[i] =0;}
        for(int j=1; j<=n; j++){cout <<visited[j]<< " ";}
        cout <<"\n";
    }

}