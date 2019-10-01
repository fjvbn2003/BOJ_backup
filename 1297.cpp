#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double d,a,b;
    double t;
    cin>> d>>a>>b;
    t = sqrt(a*a + b*b);
    cout << int(d*a/t)<<" " <<int(d*b/t)<<endl;
    return 0;

}