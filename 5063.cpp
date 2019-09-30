#include <iostream>
using namespace std;

int main(){
    int t;
    int a,b,c;
    cin>> t;
    for(int i=0; i<t; i++){
        cin>> a>>b>>c;
        if(a< b-c){
            cout <<"advertise"<<endl;
        }else if(a == b-c){
            cout <<"does not matter"<<endl;
        }else{
            cout <<"do not advertise"<<endl;
        }

    }
}