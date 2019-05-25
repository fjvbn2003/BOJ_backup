#include <iostream>
#include <bits/stdc++.h>
bool arr[21] = {false,};

using namespace std;
int main(){
    int m;
    cin>> m;
    string s;
    
    for(int i=0; i<m; i++){
        int arg;
        cin>> s;
        if(s == "add"){
            cin>> arg;
            arr[arg] = true;
        }else if(s =="check"){
            cin >> arg;
            if(arr[arg]){
                printf("1\n");
            }else{
                printf("0\n");
            }
        }else if(s == "remove"){
            cin>> arg;
            arr[arg]  =false;
        }else if(s =="toggle"){
            cin >> arg;
            arr[arg] = !arr[arg];
        }else if(s == "all"){
            for(int j=1; j<21; j++){
                arr[j] = true;
            }
        }else{
            for(int j=1; j<21; j++){
                arr[j] = false;
            }
        }

    }
    

}