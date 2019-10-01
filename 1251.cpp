#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    vector<string> arr;
    cin >> s;
    int len_s = s.size();
    for(int i=1; i<len_s; i++){
        for(int j=i+1; j<len_s; j++){
            string a = s.substr(0,i);
            reverse(a.begin(), a.end());
            string b = s.substr(i,j-i);
            reverse(b.begin(), b.end());
            string c = s.substr(j,len_s-j+1);
            reverse(c.begin(), c.end());
            
            arr.push_back(a+b+c);
        }
    }
    sort(arr.begin(), arr.end());

    // for(int i=0; i<arr.size(); i++){
    //     cout <<arr[i]<<endl;
    // }
    cout <<arr[0]<<endl;

}