#include <iostream>
#include <cmath>
#define MOD 1000000007
using namespace std;

long long GCD(long long a,long long b){
    long long c;
    // a가 더 크도록
    if(b>a){
        long long c = a;
        a = b; b = c;
    }

    while(1){
        c = a%b;
        a = b; b =c;
        if(b ==0){return a;}
    }
};

int main(){
    int num;
    long long a, b;
    long long sum, g, tmp;
    sum = 0;
    cin>> num;
    for(int i=0; i<num ; i++){
        cin >> a>> b;
        g = GCD(a,b);
        a/=g;
        b/=g;
        for(int j=2; j<MOD; j++){
            b*=b;
            b%=MOD;
        }
        tmp = a*b; tmp%=MOD;
        sum+= tmp;
    }
    cout << sum<<endl;


}