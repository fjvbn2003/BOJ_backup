#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n,a;
    stack<int> s;
    int cnt = 1
    while(cnt<=n){
        cin >> a;
        while(a!=cnt){
            cnt++;
            s.push(cnt);
            cout <<"+\n";
        }
        if(a==cnt){
            s.pop();
            cnt++;
            cout<<"-\n";
        }
    }

}