#include <iostream>
using namespace std;

int main(){
    int t;
    int arr[4];
    cin>>t;
    while(t--){
        int k;
        for(int i=0; i<4; i++){
            cin>> arr[i];
        }
        for(int i=0; i<4; i++){
            cin>>k;
            arr[i]+=k;
        }
        if(arr[0]<1){arr[0] = 1;}
        if(arr[1]<1){arr[1] = 1;}
        if(arr[2]<0){arr[2] = 0;}
        cout <<arr[0]+5*arr[1]+2*arr[2]+2*arr[3]<<endl;
        
    }
    
    
}