#include <iostream>
#include <cstdio>
using namespace std;
int arr[100001];
int main(){
    int n,m;
    int a,b;
    cin.tie(0);
    cin>> n;
    for(int i=1;i<=n; i++){
        cin>> arr[i];
    }
    cin>>m;
    while(m--){
        cin>> a>>b;
        int s = 0;    
        for(int i=a; i<=b; i++){
            s+=arr[i];
        }
        printf("%d\n", s);
    }
}