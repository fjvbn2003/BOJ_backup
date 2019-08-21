#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(pair<int,int> a, pair<int, int> b){
    if(a.second== b.second){
        return a.first <b.first;
    }else{
        return a.second < b.second;
    }
};

int main(){
    int n;
    int a,b;
    vector<pair<int,int> > arr;
    cin>> n;
    for(int i=0; i< n; i++){
        cin>> a>> b;
        arr.push_back({a,b});
    }
    sort(arr.begin(), arr.end(), comp);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i].first<< " "<< arr[i].second<<"\n";
    }
    return 0;

}