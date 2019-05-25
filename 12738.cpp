#include <iostream>
#include <vector>
using namespace std;

// Longest increasing subsets
int arr[1000001];
int main(){
    
    int n;
    vector<int> v;
    cin>> n;
    for(int i=0; i< n; i++){
        cin>> arr[i];
    }
    for(int i=0; i<n; i++){
        if(i==0) v.push_back(arr[i]);
        else if(v.back()<arr[i]) v.push_back(arr[i]);
        else{
            auto it = lower_bound(v.begin(),v.end(), arr[i]);
            *it = arr[i];
        }
    }
    // for(auto it : v){
    //     cout <<it<<" ";
    // }
    // cout <<endl;
    cout <<v.size()<<endl;

}