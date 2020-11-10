#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    int arr[11];
    int op[10];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    int it = 0;
    int t = 0;
    for(int i=0; i<4; i++){
        cin>>t;
        for(int j=0; j<t; j++){
            op[it] = i;
            it++;
        }
    }
    long long max_ans = -2000000000;
    long long min_ans =  2000000000;
    do{
        long long k = arr[0];
        for(int i=1; i<n; i++){
            if(op[i-1]==0){
                k = k+arr[i];
            }else if(op[i-1]==1){
                k = k-arr[i];
            }else if(op[i-1]==2){
                k = k*arr[i];
            }else{
                k = k/arr[i];
            }
        }
    if(k>max_ans){max_ans = k;}
    if(k<min_ans){min_ans = k;}
    }while(next_permutation(op,op+n-1));
    cout <<max_ans<<endl;
    cout <<min_ans<<endl;

}