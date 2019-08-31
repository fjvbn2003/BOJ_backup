#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> arr;
bool b[50];
int main(){
    int n;
    string s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        arr.push_back(s);
    }
    int s_len = arr[0].size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=0; k<s_len; k++){
                if(arr[i][k] != arr[j][k]){b[k]= true;}
            }
        }
    }
    for(int k=0; k<s_len; k++){
        if(!b[k]){cout <<arr[0][k];}
        else{cout <<"?";}
    }
    cout <<endl;

}