#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct person{
    int n;
    int p;
    person(int a, int b): n(a), p(b){}
};

bool comp(person &a, person &b){
    if(a.n == b.n){
        return a.p <b.p;
    }
        return a.n >b.n;
    

};

int main(){

    int n, a, b;
    vector<person> arr;
    cin>> n;
    
    for(int i=0; i< n; i++){
        cin>> a>> b;
        arr.push_back(person(a,b));
    }
    sort(arr.begin(), arr.end(), comp);
    int cnt =0;
    int p=arr[4].n;
    int i=5;
    while(1){
        if(arr[i].n == p){
            cnt++;
        }else{
            break;
        }
        i++;
    }
    cout <<cnt<<endl;

}