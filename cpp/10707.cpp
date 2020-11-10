#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,p;
    cin>> a>>b>>c>>d>>p;
    int p_a = a*p;
    int p_b = b;
    if(p>c){
        p_b += (p-c)*d;
    }
    cout << ((p_a<p_b)? p_a: p_b)<<endl;

}