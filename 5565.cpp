#include <iostream>
using namespace std;

int main(){
    int ans,t;
    cin >> ans;
    for(int i=0; i<9; i++){
        cin >> t;
        ans-=t;
    }
    cout <<ans<<endl;

}