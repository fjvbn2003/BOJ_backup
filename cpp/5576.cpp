#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int W[10];
    int K[10];
    for(int i=0; i<10; i++){
        cin>> W[i];
    }
    
    for(int i=0; i<10; i++){
        cin>> K[i];
    }
    sort(W, W+10);
    sort(K, K+10);
    cout << W[9]+W[8]+W[7]<<endl;
    cout << K[9]+K[8]+K[7]<<endl;
    
}