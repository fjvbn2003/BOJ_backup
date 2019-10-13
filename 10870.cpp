#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[21];
    arr[0]=0;
    arr[1] = 1;
    cin>>n;
    for(int i=2; i<=n; i++){
        //최적부분부조이기 때문에 dp가 가능하다.
        arr[i] = arr[i-1]+arr[i-2];
    }
    cout <<arr[n]<<endl;
}