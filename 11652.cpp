#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n,t;
    vector<long long> arr;
    cin >>n;
    for(long long i=0; i<n; i++)
    {
        cin >> t;
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end());
    long long m=0;
    long long ans =arr[0];
    long long k=1;
    for(long long i=1; i<n; i++){
        if(arr[i]==arr[i-1]){
            k++;
        }else{
            if(m<k){m =k;ans = arr[i-1];}
            k = 1;
        }
    }
    if(m<k){m =k;ans = arr[n-1];}

    cout <<ans<<endl;
}