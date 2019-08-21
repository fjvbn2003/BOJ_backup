#include <iostream>
#include <vector>
using namespace std;
vector<int> arr[101];
int memo[101];
int count;
int DFS(int a){
    if(memo[a]){return 0;}
    memo[a] = 1;
    count++;
    //cout <<"visit: "<<memo[a]<<endl;
    for(int i : arr[a]){
        DFS(i);
    }
    return 0;
}

int main(){
    int n_c, n_n;
    int a,b;
    cin>> n_c>>n_n;
    
    for(int i=0; i<n_n; i++){
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    DFS(1);
    cout <<count-1<<endl;
}