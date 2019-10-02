#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    cin >> a>>b;
    int min = 100;
    for(int i=0; i<b.size()-a.size()+1; i++){
        int k = 0;
        for(int j=0; j<a.size(); j++){
            if(a[j] != b[i+j]){
                k++;
            }
        }
        if(min >k){
            min = k;
        }
    }
    cout <<min<<endl;

}