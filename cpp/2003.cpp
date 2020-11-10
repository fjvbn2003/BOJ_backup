#include <iostream>
using namespace std;
int arr[10001];
int main(){
    int n,m,t;
    int ans = 0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    for(int i=0; i<n; i++){
        int s = arr[i];
        if(s == m){
            ans++;
            continue;
        }
        for(int j=i+1; j<n; j++){
            s+= arr[j];
            if(s == m){
                ans++;
                break;
            }
            if(s>m){
                break;
            }
        }
    }
    cout << ans<<endl;
}