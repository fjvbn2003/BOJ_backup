#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string x, y;
    cin>> x>> y;

    int rev_x = 0;
    int rev_y = 0;
    for(int i= x.size()-1; i>=0; i--){
        rev_x += pow(10,i)* (x[i]-'0');
    }
    for(int i= y.size()-1; i>=0; i--){
        rev_y += pow(10,i)* (y[i]-'0');
    }
    int t = rev_x+rev_y;
    int k = t;
    int ans = 0;
    int len_t = 0;
    while(t){
        t/=10;
        len_t++;
    }
    len_t--;
    while(k){
        ans += (k%10)*pow(10,len_t);
        len_t--;
        k/=10;
    }
    cout <<ans<<endl;

}