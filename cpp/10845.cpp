#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    queue<int> q;
    cin>> n;
    for(int i=0; i< n; i++){
        cin>> s;
        if(s == "push"){
            int t; cin>> t; q.push(t);
        }else if(s == "pop"){
            if(q.empty()){cout<< -1<<endl;}
            else{int t = q.front();q.pop(); cout <<t<<endl;}
        }else if(s == "size"){
            cout<< q.size()<<endl;
        }else if(s == "empty"){
            cout << q.empty()<<endl;
        }else if(s == "front"){
            if(q.empty()){cout<< -1<<endl;}
            else{ cout << q.front()<<endl;}
        }else if(s == "back"){
            if(q.empty()){cout<< -1<<endl;}
            else{ cout << q.back()<<endl;}
        }else{
            cout <<"error"<<endl;
            continue;
        }

    }

}