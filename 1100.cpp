#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int ans =0;
    for(int i=0; i<8; i++){
        bool even_flag = (i%2==0)? true: false;
        cin >> s;
        for(int j=0; j<8; j++){
            if(even_flag){
                if(j%2==0){
                    if(s[j]=='F'){ans++;}
                }
            }else{
                if(j%2 ==1){
                    if(s[j]=='F'){ans++;}
                }
            }
        }
    }
    cout << ans<<endl;

}