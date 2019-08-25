#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
int arr[9];
int check[9];
vector<int> v;
void permu(int cnt){
    //cout <<"cnt : "<< cnt<<endl;
    if(cnt == m){
        for(int i=1; i<=m; i++){
            cout <<arr[i]<<" ";
        }
        cout <<"\n";
        return ;
    }

    for(int i=0; i<n; i++){
        if(v[i]>= arr[cnt]){
            arr[cnt+1] = v[i];
            permu(cnt+1);
        }
            
    }
    return;
}

int main(){
    int t;
    cin>> n>>m;
    for(int i=0; i<n; i++){
        cin>> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    permu(0);
}