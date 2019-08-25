#include <iostream>
using namespace std;
void change(int &a){
    a++;
    return;
}

int main(){
    int a;
    a = 3;

    change(a);
    cout << a <<endl;

}