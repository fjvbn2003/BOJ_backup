#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int GCD(int a, int b){
    int c;
    while(b){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int main(){
    string a;
    int n,m;
    int d;
    int col_i;
    cin >> a;
    for(int i=0; i<n; i++){
        if(a[i]==':'){col_i = i;break;}
    }
    //cout << col_i<<endl;
    //cout << a.size()<<endl;
    int n_size = col_i; int m_size = a.size()-col_i-1;
    n =0;
    for(int i=n_size-1; i>=0; i--){
        d = a[i]-'0';
        n+= d*pow(10,n_size-i-1);
        //cout <<pow(10,i)<<endl;
    }
    m =0;
    for(int i=m_size-1; i>=0; i--){
        d = a[col_i + i+1]-'0';
        m+= d*pow(10,m_size-i-1);
        //cout <<pow(10,i)<<endl;
    }
    int g = GCD(n,m);
    cout <<n/g<<":"<<m/g<<endl;
    return 0;
}