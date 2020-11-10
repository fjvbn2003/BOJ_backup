#include <iostream>
using namespace std;
bool arr[30];
int main(){
    int t;
    for(int i=0; i<28; i++){
        cin>>t;
        arr[t-1] = true;
    }
    for(int i=0; i<30; i++){
        if(!arr[i]){
            cout << i+1<<endl;
        }
    }
}