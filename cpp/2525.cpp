#include <iostream>
using namespace std;

int main(){
    int h, m;
    int pm;
    cin>> h>>m>>pm;

    m+=pm;
    while(m >=60 || h>=24){
        if(m>=60){
            m-=60;
            h+=1;
        }
        if(h>=24){
            h-=24;
        }
    }
    cout <<h<<" "<<m<<endl;

}