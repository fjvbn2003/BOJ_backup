#include <iostream>
using namespace std;

int main(){
    int n, digits, tmp;
    cin>> n;
    //how many digits
    tmp = n;
    digits = 0;
    while(tmp){
        tmp/=10;
        digits +=1;
    }
    // 생성자의 최대범위
    int ans = 0;
    digits*=9;
    for(int i= n-1; i>=n-digits-1; i--){
        tmp = i;
        int sum = i;
        while(tmp){
            sum+= tmp%10;
            tmp/=10;
        }
        if(sum == n){
            ans = i;
        }
    }
    cout <<ans <<endl;


}