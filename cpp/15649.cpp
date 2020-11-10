#include <iostream>

using namespace std;
int n, m;
bool check[9];
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
        if(check[i]) continue;
        check[i] = true;
        arr[cnt+1] = i;
        permu(cnt+1);
        check[i] = false;        
    }
    return;
}

int main(){
    cin>> n>>m;
    permu(0);
}