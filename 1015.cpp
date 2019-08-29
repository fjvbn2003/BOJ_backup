#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<pair<int, int> > arr;
int memo[1001];
bool comp(pair<int,int> &a, pair<int,int> &b){
    if(a.first == b.first){
        return a.second<b.second;
    }
    return a.first<b.first;
}

int main(){
    int n,t;
    cin >> n; 
    for(int i=0; i<n; i++){
        cin >> t;
        arr.push_back({t, i});
    }
    sort(arr.begin(), arr.end(),comp);
    // for(int i=0; i<n; i++){
    //     cout <<arr[i].first<<" ";
    // }
    // for(int i=0; i<n; i++){
    //     cout <<arr[i].second<<" ";
    // }
    for(int i=0; i<n; i++){
        memo[arr[i].second] = i;
    }
    for(int i=0; i<n; i++){
        cout << memo[i]<<" ";
    }
    cout <<endl;


}