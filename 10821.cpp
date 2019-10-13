#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>> s;
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] ==','){
            ans++;
        }
    }
    cout <<ans+1<<endl;
}