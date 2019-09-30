#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n,k;
    bool arr[1001];
    memset(arr, true, sizeof(arr));
    cin >> n>>k;
    int ans = 0;
    for(int i=2; i<=n; i++){
        int t = i;
        int it = 1;
        if(!arr[i]){continue;}
        while(t<=n){
            t = it*i;
            if(t>n){break;}
            if(arr[t]){
                arr[t] = false;
                //cout <<t<<endl;
                ans++;
                if(ans == k){
                    cout <<t<<endl;
                    return 0;
                }
            }
            it++;
        }
        
    }
    // for(int i=1; i<100; i++){
    //     if(arr[i]){
    //         cout << i<<" ";
    //     }
    // }
    cout <<endl;


}