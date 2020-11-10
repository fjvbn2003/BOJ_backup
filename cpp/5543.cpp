#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int burger[3];
    int beverage[2];
    for(int i=0;i<3; i++){cin>> burger[i];}
    for(int i=0;i<2; i++){cin>> beverage[i];}
    sort(burger, burger+3);
    sort(beverage, beverage+2);
    cout << burger[0]+beverage[0]-50<<endl;
}