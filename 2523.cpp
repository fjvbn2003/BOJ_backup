#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<=i;j++){
            cout <<"*";
        }
        cout <<"\n";
    }
    for(int i=0; i<n; i++){
        cout <<"*";
    }
    cout <<endl;
    for(int i=0; i<n-1; i++){
        for(int j=n-i-1;j>0 ;j--){
            cout <<"*";
        }
        cout <<"\n";
    }

}
