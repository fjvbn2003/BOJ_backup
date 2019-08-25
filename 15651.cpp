#include <iostream>

using namespace std;
int n, m;
int arr[9];
void permu(int cnt){
    //cout <<"cnt : "<< cnt<<endl;
    if(cnt == m){
        for(int i=1; i<=m; i++){
            cout <<arr[i]<<" ";
        }
        cout <<"\n";
        return ;
    }

    for(int i=1; i<=n; i++){
        arr[cnt+1] = i;
        permu(cnt+1);

    }
    return;
}

int main(){
    cin>> n>>m;
    permu(0);
}