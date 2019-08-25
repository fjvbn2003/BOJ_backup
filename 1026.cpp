#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,t;
    vector<int> a;
    vector<int> b;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>>t;
        a.push_back(t);
    }
    for(int i=0; i<n; i++){
        cin>>t;
        b.push_back(t);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+= a[i]*b[n-i-1];
    }
    cout <<sum<<endl;
}