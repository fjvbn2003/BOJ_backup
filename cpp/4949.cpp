#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    char cstr[102];
    while(1){
        cin.getline(cstr,102);
        // 종료조건
        if(cstr[0] == '.'){
            break;
        }
        int i=0;
        stack<char> s;
        bool flag =false;
        while(1){
            if(cstr[i]=='.'){break;}
            //왼쪽 소괄호
            else if(cstr[i] == '('){
                s.push('(');
            }
            //오른쪽 소괄호
            else if(cstr[i]==')'){
                if(s.empty()){
                    flag = true;
                    break;
                }
                char t = s.top();
                if(t=='('){
                    s.pop();
                }else{
                    flag = true;

                    break;
                }
            }
            //왼쪽 대괄호
            else if(cstr[i]=='['){
                s.push('[');
            }
            //오른쪽 대괄호
            else if(cstr[i]==']'){
                if(s.empty()){
                    flag = true;
                    break;
                }
                char t = s.top();
                if(t=='['){
                    s.pop();
                }else{
                    flag = true;
                    break;
                }
            }else{
            }
            i++;
        }
        if(!s.empty() || flag ){cout <<"no"<<endl;}
        else{
            cout<<"yes"<<endl;
        }

    }
}