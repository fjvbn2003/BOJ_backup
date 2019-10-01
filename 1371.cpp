#include <iostream>
#include <string>
using namespace std;
int arr[26];
int main(){
    string s;
    int m = -1;
    while(cin>> s){
        for(char  t : s){
            arr[t-'a']++;
            if(arr[t-'a'] >m){m =arr[t-'a'];}
        }
    }
    for(int i=0; i<26; i++){
        if(arr[i]==m){
            cout <<(char)(i+'a');
        }
    }
    cout <<endl;
}