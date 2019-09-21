#include <iostream>
using namespace std;

int main(){
    long long s, n;
    cin >> s;
    int i=1;
    long long t = 0;
    while(1){
        t+=i;
        if(t>s){
            cout << i-1<<endl;
            return 0;
        }
        i++;
    }
}