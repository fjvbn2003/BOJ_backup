#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int T;
    cin>>T;
    for(int test_case=0; test_case<T; test_case++){
        string p, arr;
        int n;
        bool flag = false;
        deque<int> dq;
        cin>>p>>n>>arr;
        for(int i=0; i<n; i++){
            dq.push_back(arr[i*2+1]-48);
            //cout<<dq[i]<<endl;
        }
        // 연산
        for(int i=0; i<p.length(); i++){
            if(p.at(i)=='R'){
                stack<int> s;
                int ds = dq.size();
                for(int j=0; j<ds; j++){
                    s.push(dq.front());
                    //cout<<"Dq "<<dq.front()<<endl;
                    dq.pop_front();
                }
                for(int j=0; j<ds; j++){
                    //cout<<"S "<<s.top()<<endl;
                    dq.push_back(s.top());
                    s.pop();
                }
            }else{
                if(dq.size() ==0){
                    flag = true;
                    break;
                }else{
                    dq.pop_front();
                }
            }
        }
        if(flag){
            printf("error\n");
        }else{
            printf("[");
            for(int i=0; i<dq.size(); i++){
                printf("%d",dq[i]);
                if(i!=dq.size()-1){
                    printf(",");
                }
            }
            cout<<"]"<<endl;
        }

    }
}