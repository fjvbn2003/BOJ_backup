#include <iostream>
#include <string>
using namespace std;
int arr[50][50];
int main(){
    int n, m;
    string s;
    cin >> n>> m;

    for(int i=0; i<n; i++){
        cin >>s;
        for(int j=0;j<m;j++){
            arr[i][j] = (s[j]-'0');
        }
    }

    for(int i=0; i<n; i++){
         for(int j=0;j<m;j++){
             
         }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0;j<m;j++){
    //         cout << arr[i][j]<<" ";
    //     }
    //     cout <<endl;
    // }

}