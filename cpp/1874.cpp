#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int n,a, cnt;
    stack<int> s;
    string ans;
    cin >> n;
    cnt =1;
    while(n--){
        cin >> a;
        while(a>=cnt){
            s.push(cnt);
            ans+="+\n";
            cnt++;
        }
        if(s.top()==a){
            s.pop();
            ans+="-\n";
        }else{
            cout <<"NO"<<endl;return 0;
        }
    }
    cout <<ans<<endl;
}