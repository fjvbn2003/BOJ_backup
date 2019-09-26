#include <iostream>
#include <vector>
using namespace std;
int n;
int arr[100][100];
vector<pair<int,int> > g[100][100];
void dfs(int x, int y){
    
}

int main(){
    cin>> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    // make directed graph 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+arr[i][j] <n){(g[i][j]).push_back({i+arr[i][j],j});}
            if(j+arr[i][j] <n){(g[i][j]).push_back({i,arr[i][j]+j});}
        }
    }
    dfs(0,0);
}