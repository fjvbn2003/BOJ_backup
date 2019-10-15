#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string s;
    cin>> s;
    int ans = 0;
    for(int i=s.size()-1;i>=0 ;i--){
        int k;
        if(s[i] >= 'A'){
            k = s[i]-'A'+10;
        }else{
            k = s[i] - '0';
        }
        ans += k*pow(16,s.size()-1-i);
    }
    cout <<ans<<endl;

}