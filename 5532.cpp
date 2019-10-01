#include <iostream>
using namespace std;
int main(){
    int l,a,b,c,d;
    cin>> l>>a>>b>>c>>d;
    int kuk = 0;
    int su = 0;
    kuk += a/c;
    if(a%c >0){
        kuk++;
    }
    su += b/d;
    if(b%d >0){
        su++;
    }
    cout << l-max(kuk,su)<<endl;
}