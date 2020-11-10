#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    int a,b;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        int ans =1;
        for(int j=0; j<b; j++){
            ans= (ans*a)%10;
            if(ans==0){ans =10;}
        }
        cout<< ans<<endl;
    }

}