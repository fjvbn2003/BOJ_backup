#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, ori;
    int ans = 0;
    cin>> ori;
    n = ori;
    int i=0;
    while(n){
        i++;
        n/=10;
    }
    for(int j = 0; j<i-1; j++){
        ans += 9*pow(10,j)*(j+1);
    }
    //cout <<ans<<endl;
    ans += (ori - pow(10,i-1) +1)*i;
    cout <<ans<<endl;
}