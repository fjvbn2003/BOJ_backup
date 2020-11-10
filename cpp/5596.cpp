#include <iostream>
using namespace std;

int main(){
    int a=0;
    int b=0;
    int t;
    for(int i=0; i<4; i++){
        cin>> t;
        a+= t;
    }
    for(int i=0; i<4; i++){
        cin>> t;
        b+= t;
    }
    cout << ((a>b)? a:b)<<endl;
}