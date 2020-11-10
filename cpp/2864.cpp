#include <iostream>
#include  <string>
using namespace std;

int main(){
    string a, b;
    cin >> a>> b;
    int ma,mb,ba,bb;
    ma = mb = ba = bb =0;
    int k = 1;
    // ma와 ba를 구하는 과정
    for(int i=a.size()-1; i>=0; i-- ){
        int mt = (a[i]=='6')? 5 : a[i]-'0';
        //cout <<"mt: "<<mt<<endl;
        int bt = (a[i]=='5')? 6 : a[i]-'0';
        //cout <<"bt: "<<bt<<endl;

        ma += (mt)*k;
        ba += (bt)*k;
        //cout << "ma: "<< ma<< " ba: "<<ba<<endl;
        k*=10;
    }
   // cout << ma<< " "<<ba<<endl;
    // mb와 bb를 구하는 과정
    k=1;
    for(int i=b.size()-1; i>=0; i-- ){
        int mt = (b[i]=='6')? 5 : b[i]-'0';
        int bt = (b[i]=='5')? 6 : b[i]-'0';
        mb += (mt)*k;
        bb += (bt)*k;
        k*=10;
    }
    cout << ma+mb<<" "<< ba+bb<<endl;
}