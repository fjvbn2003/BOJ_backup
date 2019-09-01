#include <iostream>

using namespace std;
int main(){
    int n, t;
    cin >> n;
    int ans = 0;
    for(int i=0; i<5; i++){
        cin>> t;
        if(t==n){ans++;}
    }
    cout <<ans<<endl;

}