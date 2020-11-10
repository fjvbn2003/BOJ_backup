#include <iostream>
using namespace std;
int ans =0;
long long n, s;
int arr[20];

void combi(int idx, long long sum){
    if(idx>=n){return;}
    sum += arr[idx];
    if(sum == s){
        ans++;
    }
    combi(idx+1, sum-arr[idx]);
    combi(idx+1, sum);
}

int main(){

    cin >> n>>s;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    combi(0,0);
    cout <<ans<<endl;
}