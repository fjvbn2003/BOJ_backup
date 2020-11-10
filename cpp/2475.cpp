#include <iostream>
using namespace std;

int main(){
    int ans,t,sum;
    sum = 0;
    for(int i=0; i<5; i++){
        cin>> t;
        t%=10;
        sum += t*t;
        sum%=10;
    }
    cout<<sum%10<<endl;

}