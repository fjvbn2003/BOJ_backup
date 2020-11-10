#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s;
    long long ans = 0;
    for(int i=0; i<3; i++){
        cin >> s;
        int a;
        if(s == "black"){a= 0;}
        else if(s == "brown"){a = 1;}
        else if(s == "red"){a = 2;}
        else if(s == "orange"){a = 3;}
        else if(s == "yellow"){a = 4;}
        else if(s == "green"){a = 5;}
        else if(s == "blue"){a = 6;}
        else if(s == "violet"){a = 7;}
        else if(s == "grey"){a = 8;}
        else if(s == "white"){a = 9;}
        else{return 0;}
        
        if(i==0){ans+= a*10;}
        else if(i ==1){ans+=a;}
        else{
            for(int i=0; i<a; i++){
                ans*=10;
            }
        }
    }
    cout << ans<<endl;
}