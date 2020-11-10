#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n, t;
    vector<int> arr;
    cin >> n;
    for(int i=0; i< n; i++){
        cin >> t;
        arr.push_back(t);
    } 
    int ans = 0;
    // for(int i=0; i< n; i++){
    //  cout <<arr[i]<<" ";
    // }
    // cout << endl;
    sort(arr.begin(), arr.end());
    do{
        int t_sum = 0;
        for(int i=0; i<=arr.size()-2; i++){
            //cout <<arr[i]<< " "<< arr[i-1]<<endl;
            t_sum += abs(arr[i]-arr[i+1]);
        }   
        //cout <<t_sum<<endl;
        if(ans<t_sum){ans = t_sum;}
    }while(next_permutation(arr.begin(), arr.end()));
    cout << ans<<endl;
}