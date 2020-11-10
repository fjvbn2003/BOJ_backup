#include <iostream>
using namespace std;

int main(){
    int n,w,h;
    cin >> n>>w>>h;
    int s = w*w + h*h;
    int t;
    for(int i=0; i<n; i++){
        cin >> t;
        if(t*t <= s){cout <<"DA"<<endl;}
        else{cout <<"NA"<<endl;}
    }
    
}