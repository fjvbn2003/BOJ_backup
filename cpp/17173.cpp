#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    set<int> s;
    vector<int> arr;
    cin >>n>>m;
    int a;
    for(int i=0; i< m ;i++){
        cin>> a;
        arr.push_back(a);
    }
    for(int i=0; i< arr.size();i++){
        int j=1;
        int k =arr[i];
        while(n>=k*j){
            s.insert(k*j);
            j++;
        }
    }
    long long ans = accumulate(s.begin(), s.end(),0);
    cout << ans<<endl;
}