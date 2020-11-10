#include <iostream>
using namespace std;
int main(){
    int n, b, c;
    int arr[1000001];
    long long ans=0;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cin>> b>>c;
    for(int i=0; i<n; i++){
        arr[i]-= b;
        ans++;
        if(arr[i]>0){
            if(arr[i]%c){
                ans+= arr[i]/c + 1;
            }else{
                ans+= arr[i]/c;
            }
        }
    }
    cout <<ans<<endl;


}