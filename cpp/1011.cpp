#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int T;
    double x, y, d;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> x>>y;
        d = (x<y)? y-x: x-y;
        int t = 1;
        while(true){
            if(t*(t+1)>=d){break;}
            else{
                t++;
            }
        }
        if((t*(t-1)+t*(t+1))/2<d){
            cout <<t*2<<"\n";
        }else{
            cout <<t*2-1<<"\n";
        }
        
    }

}