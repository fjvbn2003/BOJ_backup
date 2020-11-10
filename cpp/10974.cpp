#include <iostream>
using namespace std;
int n;
int arr[8];
int memo[9];
int ans[8];
void combi(int idx){

    if(idx==n){
        for(int i=0; i<idx; i++){
            cout <<ans[i]<<" ";
        }
        cout <<"\n";
        return;
    }
    for(int i=1; i<=n; i++){
        //아직 미지정
        if(memo[i]==0){
            memo[i]=1;
            ans[idx] = i;
            combi(idx+1);
            memo[i]=0;
        }
    }

}

int main(){
    cin>> n;
    for(int i=1; i<=n; i++){
        arr[i-1] = i;
    }
    combi(0);

}