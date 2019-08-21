#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,t;
    vector<int> arr;
    cin >> n;
    
    for(int i=0; i< n; i++){
        cin >> t;
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end());
    cout <<arr.front()<<" "<<arr.back()<<endl;


}