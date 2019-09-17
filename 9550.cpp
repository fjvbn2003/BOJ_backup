#include <iostream>
using namespace std;

int main(){
    int t, tmp;
    int n,k, ans;
    cin >> t;
    while(t--){
        ans = 0;
        cin>> n>> k;
        for(int i=0; i<n; i++){
            cin >> tmp;
            ans += tmp/k;
        }
        cout << ans<<endl;
    }

}