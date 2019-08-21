#include <iostream>
#define MOD 9901
using namespace std;
int arr[100001][3];

int main(){
    int n;
    arr[1][0] = 1;
    arr[1][1] = 1;
    arr[1][2] = 1;
    //cout << arr[1][0]<<" "<< arr[1][1]<<" "<< arr[1][2]<<" "<<endl;

    cin>> n;
    for(int i=2; i<n+1; i++){
        arr[i][0] = arr[i-1][0] + arr[i-1][1] + arr[i-1][2]; arr[i][0]%=MOD;
        arr[i][1] = arr[i-1][0] + arr[i-1][2]; arr[i][1]%=MOD;
        arr[i][2] = arr[i-1][0] + arr[i-1][1]; arr[i][2]%=MOD;
    }
    //cout << arr[1][0]<<" "<< arr[1][1]<<" "<< arr[1][2]<<" "<<endl;
    cout << (arr[n][0]+ arr[n][1] +arr[n][2])%MOD<<endl;
    return 0;
}
