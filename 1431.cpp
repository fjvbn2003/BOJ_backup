#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
bool comp(string a, string b){
    if(a.size() == b.size()){
        int s_a = 0;
        int s_b = 0;
        for(int i=0; i<a.size(); i++){
            if('0'<=a[i] && a[i]<='9'){
                s_a += a[i]-'0';
            }
        }
        for(int i=0; i<b.size(); i++){
            if('0'<=b[i] && b[i]<='9'){
                s_b += b[i]-'0';
            }
        }

        if(s_a == s_b){
            return (a.compare(b)<0);
        }else{
            return s_a <s_b;
        }

    }else{
        return a.size()<b.size();
    }
}

int main(){
    int n;
    vector<string> arr;
    string s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        arr.push_back(s);
    }
    sort(arr.begin(), arr.end(), comp);
    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<endl;
    }


}