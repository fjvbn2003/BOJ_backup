#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int arr[10];
    int t[10];
    cin >> n;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    for(int i=1; i<=n; i++){
        t[i-1] = i;
    }
    do{
        bool flag = false;
        for(int i=0; i<n; i++){
            int k = 0;
            for(int j=0; j<i; j++){
                if(t[j]>t[i]){k++;}
            }
            if(k != arr[t[i]-1]){
                // 조건 만족 x
                flag = true;
                break;
            }
        }
        if(!flag){
            for(int i=0; i<n; i++){
                cout <<t[i]<<" ";
            }
            cout <<endl;
        }
    }while(next_permutation(t,t+n));

}