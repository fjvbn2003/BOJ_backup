#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    map<char, int> m;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>> s;
        if(m.count(s[0])==0){
            m.insert({s[0],1});
        }
        else{
            m.find(s[0])->second++;
        }
    }
    bool flag =false;
    for(auto i : m){
        //cout <<i.first<<" "<< i.second<<endl;
        if(i.second >=5){
            cout << i.first;
            flag = true;
        }
    }
    if(!flag){
        cout <<"PREDAJA"<<endl;
    }

}