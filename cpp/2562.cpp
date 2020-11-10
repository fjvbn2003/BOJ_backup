#include <iostream>
using namespace std;
int main(){
    int t, max, max_i;
    max = -1;
    max_i = 1;
    for(int i=1; i<=9; i++){
        cin>> t;
        if(max<t){
            max = t;
            max_i = i;
        }
    }
    cout <<max<<endl;
    cout << max_i<<endl;


}