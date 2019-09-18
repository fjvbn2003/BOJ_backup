#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a>> b>> c;
    int gab = (b-a < c-b)? c-b : b-a;
    cout << gab-1<<endl;

}