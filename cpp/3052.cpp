#include <iostream>
#include <set>
using namespace std;

int main(){
    int tmp;
    set<int> s;
    for(int i=0; i<10; i++){
        cin>> tmp;
        s.insert(tmp%42);
    }
    cout << s.size()<<endl;
}