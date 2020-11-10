#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<int,int> > arr;
    int t;
    for(int i=0; i<5; i++){
        int s = 0;
        for(int j=0; j<4; j++){
            cin >> t;
            s+=t;
        }
        arr.push_back({s,i+1});
    }
    sort(arr.begin(), arr.end());
    cout << arr[4].second<<" "<<arr[4].first<<endl;

}