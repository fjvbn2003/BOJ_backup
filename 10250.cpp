#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int h,w,n;
        vector<string> arr;
        cin>> h>>w>>n;
        string s;
        for(int i=1; i<=w; i++){
            for(int j=1; j<=h; j++){
                s = to_string(j);
                if(i<10){s = s+ "0"+to_string(i);}
                else{s+=to_string(i);}
                arr.push_back(s);
            }
        }
        // for(int i=0; i<arr.size(); i++){
        //     cout <<arr[i]<<endl;
        // }
        cout <<arr[n-1]<<endl;

    }

}