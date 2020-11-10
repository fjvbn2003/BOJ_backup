#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> arr;
    deque<int> dq;
    int n,m;
    int tmp;
    cin>> n>>m;

    for(int i=0; i< m; i++){
        cin>>tmp;
        arr.push_back(tmp);
    }
    for(int i=0; i< n; i++){
        dq.push_back(i+1);
    }
    int cnt =0;

    for(int i=0; i<m; i++){
        int key = arr[i];
        int idx;
        //인덱스 찾기.
        for(int j=0; j<dq.size(); j++){
            //cout <<"dq[j] "<<dq[j]<<endl;
            if(dq[j] == key){
                idx = j;
            }
        }
        //cout <<"key "<<key<<endl;
        //왼쪽 시프트
        if(idx ==0){
            dq.pop_front();
        }
        else if(idx<=dq.size()/2){
            while(dq.front() != key){
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            dq.pop_front();
        }else{
            while(dq.front() != key){
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
            dq.pop_front();
        }

    }
    cout <<cnt<<endl;


}