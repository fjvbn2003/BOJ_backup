#include <iostream>
using namespace std;
int main(){
    long long S1, S2, a,b;
    cin>> S1>> S2;
    bool flag1 = false;
    bool flag2 = false;
    while (S1--){
        cin >>a>>b;
        if(a!=b){
            flag1 = true;
            break;
        }
    }
    while(S2--){
        cin>> a>>b;
        if(a!=b){
            flag2 = true;
            break;
        }
    }
    if(flag1){
        cout <<"Wrong Answer\n";
    }else if(!flag1 && flag2){
        cout<<"Why Wrong!!!\n";
    }else if(!flag1 && !flag2){
        cout<< "Accepted\n";
    }else{
         cout <<"Wrong Answer\n";

    }
}   