#include <iostream>
#include <cstring>
using namespace std;
// 색종이 문제
int main(){
    int n,a,b;
    int arr[100][100];
    memset(arr, 0, sizeof(arr));
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a>> b;
        for(int j=a; j<a+10; j++){
            for(int k=b; k<b+10; k++){
                arr[j][k] = 1;
            }
        }
    }
    int ans = 0;
    for(int j=0; j<100; j++){
        for(int k=0; k<100; k++){
            if(arr[j][k]){ans++;}
        }
    }
    cout << ans<<endl;
}