#include <iostream>
using namespace std;
long long arr[1000001];
int main(){
    int n;
    cin >> n;
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    for(int i = 3; i<=n; i++){
        arr[i] = (arr[i-1]+arr[i-2])%15746;
    }
    cout << (arr[n])%15746<<endl;

}