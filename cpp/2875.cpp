#include <iostream>
using namespace std;

int main(){
    int n,m,k;
    cin >> n>>m>> k;
    int cnt = 0;
    while(1){
        if(n<2 || m<1){break;}
        n-=2;m-=1;
        cnt++;
    }
    while(n+m <k){
        n+=2; m+=1;
        cnt--;
    }
    cout <<cnt<<endl;

}