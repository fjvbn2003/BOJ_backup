#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k, t;
    vector<int> arr;
    cin >> n>>k;
    for(int i=0; i<n;i++){
        scanf("%d",&t);
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end());
    cout << arr[k-1]<<endl;

}