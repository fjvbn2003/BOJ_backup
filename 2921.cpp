#include <iostream>
using namespace std;

int main(){
    int n;
    long long ans =0;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<i+i+1; j++){
            ans+=j;
        }
    }
    cout <<ans<<endl;
    return 0;

}