#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin>> a>> b;
    int ori = b;
    int b_arr[3];
    for(int i=0; i<3; i++){ 
        b_arr[i] = b%10;
        b/=10;
    }
    for(int i=0; i<3; i++){ 
        cout << a*b_arr[i]<<endl;
    }
    cout << ori*a<<endl;

}