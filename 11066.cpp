#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int d =3;
    for(int i=1; i<n; i++){
        d = 2*d -1;
    }
    cout <<d*d<<endl;
    return 0;

}