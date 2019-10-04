#include <iostream>
using namespace std;

int main(){
    long long n;
    long long k = 0;
    cin >> n;

    for(long long i=1; i<=n*n; i++){
        if(i/n == i%n){
            k = i;
            break;
        }
    }
    long long ans = 0;
    for(int i = 1; i<n; i++){
        //cout <<(k)*i<<endl;
        ans += (k)*i;
    }
    cout << ans<<endl;

}