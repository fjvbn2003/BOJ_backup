#include <iostream>

using namespace std;
int GCD(int a, int b){
    int c;
    while(b){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}
int main(){
    int a, b;
    while(1){
        cin >> a >> b;
        if(a==0){return 0;}
        int g = GCD(a, b);
        if(g ==1 || a == b){cout <<"neither"<<endl;}
        else{
            if(a<b){cout <<"factor"<<endl;}
            else{cout <<"multiple"<<endl;}
        }

    }
}