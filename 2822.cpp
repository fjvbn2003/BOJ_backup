#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    vector<pair<int,int> > arr;
    vector<int> arr2;
    for(int i=1; i<=8; i++){
        cin>>t;
        arr.push_back({t,i});
    }    
    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i=7; i>=3; i--){
        ans+= arr[i].first;
        arr2.push_back(arr[i].second);
    }
    cout <<ans<<endl;
    sort(arr2.begin(), arr2.end());
    for(int i=0; i<5; i++){
        cout << arr2[i]<<" ";
    }
    cout <<endl;
}