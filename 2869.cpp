#include <iostream>
using namespace std;

int main(){
    int a,b,v;
    int count=1;
    int height = 0;
    cin >> a>>b>>v;
    while(1){
        height += a;
        if(height>= v){cout << count<<endl; return 0;}
        height-=b;
        count++;
    }
}