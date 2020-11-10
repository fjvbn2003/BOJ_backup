#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<3; i++){
        int count =0;int t;
        for(int j=0;j<4; j++){
            cin>> t;
            if(t==0){count++;}
        }
        if(count ==0){
            cout <<"E"<<"\n";
        }else if(count ==1){
            cout <<"A"<<"\n";
        }else if(count ==2){
            cout <<"B"<<"\n";
        }else if(count ==3){
            cout <<"C"<<"\n";
        }else{
            cout <<"D"<<"\n";
        }
    }
    cout<<endl;
}