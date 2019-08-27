#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n, t;
    vector<int> arr;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end());
    int ans =0;
    int left = 0;
    int right = arr.size()-1;
    bool turn_right = true;
    while(left != right){
        cout <<"left: "<< left<<",   right: "<<right<<endl;
        ans += abs(arr[left]-arr[right]);
        if(turn_right){right--;turn_right = !turn_right;}
        else{left++; turn_right =  !turn_right;}
    }
    cout <<ans<<endl;

}