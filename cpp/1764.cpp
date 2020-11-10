#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    string s;
    map<string,int> deto;
    vector<string> arr;
    cin>> n>>m;
    for(int i=0; i<n; i++){
        cin>>s;
        deto.insert({s,i+1});
    }
    for(int i=0; i<m; i++){
        cin>>s;
        if(deto.count(s)!=0){
            arr.push_back(s);
        }
    }
    sort(arr.begin(), arr.end());
    int t = arr.size();
    cout << t<<endl;
    for(int i=0; i<t; i++){
        cout <<arr[i]<<"\n";
    }
}