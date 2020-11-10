#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int k = 1;
    int a,b;
    for(int i=0; i<m; i++){
        cin>> a>>b;
        if(a==k){
            k = b;
        }else if(b==k){
            k = a;
        }
        else{
            continue;
        }
    }
    cout <<k<<endl;

}