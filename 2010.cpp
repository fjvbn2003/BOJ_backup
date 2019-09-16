#include <iostream>
using namespace std;

int main(){
    int n,t;
    int ans = 1;
    cin >> n;
    
    for(int i=0; i< n; i++){
        cin >> t;
        ans--;
        ans+=t;
    }
    cout << ans<<endl;
    
}