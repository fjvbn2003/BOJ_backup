#include <iostream>
using namespace std;


int main(){
    long long arr[10001];
    int n;
    
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    cin >> n;
    for(int i=4; i<=n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[n]<<endl;


}