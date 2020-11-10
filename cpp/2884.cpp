#include <iostream>
using namespace std;

int main(){
    int h,m;
    cin>> h>> m;
    int new_m = m-45;
    if(new_m <0){
        h -=1;
        new_m+=60;
        if(h<0){
            h+=24;
        }
    }
    cout << h<< " "<<new_m;
    return 0;
}