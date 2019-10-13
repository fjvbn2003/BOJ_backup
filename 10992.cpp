#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n-i-1; j>=0; j--){
            cout<<" ";
        }
        if(i==n){
            for(int j=1; j<=2*i-1; j++){
                cout<<"*";
            }
            cout <<endl;
            return    0;
        }
        for(int j=1; j<=2*i-1; j++){
            if(j==1){cout<<"*";}
            else if(j==2*i-1){cout <<"*";}
            else{cout <<" ";}

        }
        cout <<endl;
    }
}