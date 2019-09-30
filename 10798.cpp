#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char arr[5][15];
int main(){
    string s;
    memset(arr, ' ', sizeof(arr));
    for(int i=0; i<5; i++){
        cin >> s;
        for(int j=0; j<s.size();j++){
            arr[i][j] = s[j];
        }
    }
    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(arr[j][i]==' '){continue;}
            cout << arr[j][i];
        }
    }
    cout <<endl;
    return 0;
}