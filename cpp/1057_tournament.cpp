#include <iostream>

using namespace std;


int main(){
    int n, a, b;
    cin >>n>> a>>b;
    int cnt =0;
    while(a!=b){
        cnt++;
        if(a%2 ==0){
            a /=2;
        }else{
            a = a/2 +1;
        }

        if(b%2 ==0){
            b /=2;
        }else{
            b = b/2 +1;
        }

    }
    cout<<cnt<<endl;

}