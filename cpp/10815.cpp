#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    int t;
    vector<int> arr;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &t);
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end());
    cin>> m;
    for(int i=0; i<m; i++){
        scanf("%d", &t);
        auto k = lower_bound(arr.begin(),arr.end(),t);
        if(*k == t){cout <<1<< ' ';}
        else{cout <<0<<' ';}
    }
    cout <<endl;
}