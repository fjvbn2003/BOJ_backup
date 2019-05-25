#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int m;
    int bits_set = 0;
    char s[6];
    int arg;
    cin>> m;
    for(int i=0; i< m; i++){
        scanf("%s",s);
        if(s[0]=='c'){
            cin>> arg;
            int ret = bits_set&(1<<arg)? 1:0;
            printf("%d\n", ret);
        }
        else if(s[0]=='a' && s[1]=='d'){
            scanf("%d",arg);
            bits_set |= ( 1<< arg);
        }else if(s[0]=='r'){
            scanf("%d",arg);
            bits_set &= ~(1<<arg);
        
        }else if(s[0]=='t'){
            scanf("%d",arg);
            bits_set ^= (1<<arg);
        }else if(s[0]=='a' && s[1]=='l'){
            bits_set = (arg<<21) -1;
        }else if(s[0]=='e'){
            bits_set = 0;
        }else{
            continue;
        }
    }

}