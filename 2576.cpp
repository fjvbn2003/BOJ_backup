#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    int sum = 0;
    int min = 101;
    for(int i=0; i<7; i++){
        cin>> t;
        if(t%2==1){
            sum+= t;
            if(min>t){min = t;}
        }

    }
    if(sum ==0){
        cout <<-1<<endl;
    }else{
        cout <<sum<<endl;
        cout <<min<<endl;
    }
}