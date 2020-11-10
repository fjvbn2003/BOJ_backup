#include <iostream>
using namespace std;

int main(){
    int n,f;
    cin>> n>> f;
    int t = n/100;
    t*=100;
    //cout <<t<<endl;
    // 십의 자리
    for(int i=0; i<10; i++){
        // 일의 자리
        for(int j=0; j<10; j++){
            if((t+10*i+j)%f ==0){
                cout <<i<<j<<endl;
                return 0;
            }
        }
    }
}