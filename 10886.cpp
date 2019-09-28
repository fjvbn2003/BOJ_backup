#include <iostream>
using namespace std;

int main(){
    int n;
    int a=0;
    int b = 0;
    int t;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>> t;
        if(t==0){b++;}
        else{a++;}
    }
    if(a>b){
        cout <<"Junhee is cute!"<<endl;
    }else{
        cout <<"Junhee is not cute!"<<endl;
    }
}