#include <iostream>
#include <cmath>
using namespace std;
long long multi(long long a, long long b, long long c){
    if(b==1){
        return a;
    }
    long long t = multi(a,b/2,c)%c;
    if(b%2==0){
        return (t*t)%c;
    }else{
        return (((t*t)%c)*a)%c;
    }

}

int main(){
    long long a1,b1,c1;
    cin >> a1>>b1>> c1;
    cout << multi(a1,b1,c1)%c1<<endl;

}