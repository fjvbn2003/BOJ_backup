#include <iostream>
using namespace std;
int arr[10001];
int main(){
    int k, n;
    long long tmp;
    long long param;
    long long sum=0;
    long long max = -1;
    long long left =1;
    long long right;
    long long mid;
    long long result;
    long long cnt = 0;

    cin>> k>> n;
    for(int i=0; i< k; i++){
        cin>> arr[i];
        if(max<arr[i]){max = arr[i];}
    }
    right = max;
    while(left<=right){
        cnt=0;
        mid = (left+right)/2;
        for( int i=0; i<k; i++){
            cnt+= arr[i]/mid;
        }
        if(cnt>=n){
            left = mid+1;

        } else{
            right = mid-1;
        }
    //cout <<left<<" "<<right<<" "<< mid<<" "<<endl;

    }
    cout <<right;
}