#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;
int arr[21];
int mat[21][21];
int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<n; i++){
        arr[i] = i;
    }
    sort(arr, arr+n);
    int ans = INT_MAX;
    do{
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<n/2; i++){
            for(int j=i+1; j<n/2; j++){
                sum1+=mat[arr[i]][arr[j]];
                sum1+=mat[arr[j]][arr[i]];
            }
        }
        for(int i=n/2;i<n; i++){
            for(int j=i+1; j<n; j++){
                sum2+=mat[arr[i]][arr[j]];
                sum2+=mat[arr[j]][arr[i]];
            }
        }
        if(ans> abs(sum1-sum2)){
            ans = abs(sum1-sum2);
        }
        
    }
    while(next_permutation(arr, arr+n));
    cout <<ans<<endl;
}