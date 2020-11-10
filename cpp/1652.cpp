#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    char arr[100][100];
    string s;
    cin>> n;
    for(int i=0; i<n; i++){
        cin >>s;
        for(int j=0; j<n; j++){
            arr[i][j] = s[j];
        }
    }
    //가로 체크
    int hori = 0;
    int verti = 0;
    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=1; j<n; j++){
            if(flag){
                if(arr[i][j-1] == '.' && arr[i][j]=='.'){
                    hori++;
                    flag = false;
                }
            }
            if(arr[i][j]=='X'){
                flag = true;
            }
        } 
    }
    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=1; j<n; j++){
            if(flag){
                if(arr[j-1][i] == '.' && arr[j][i]=='.'){
                    verti++;
                    flag = false;
                }
            }
            if(arr[j][i] == 'X'){
                flag = true;
            }
            
        }
    }
    cout <<hori<<" "<<verti<<endl;
}