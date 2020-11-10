#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count =0;
    int num = 666;
    while(count <n){
        string s = to_string(num);
        int six_cnt =0 ;
        for(char c: s){
            if(c=='6'){
                six_cnt++;
            }else{
                six_cnt = 0;
            }
            if(six_cnt>=3){count++;break;}
        }
        num++;
    }
    cout <<num-1<<endl;
}