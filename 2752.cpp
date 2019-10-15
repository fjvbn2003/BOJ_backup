#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    vector<int> arr;
    for(int i=0; i<3; i++){
        cin>> t;
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<3; i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
}