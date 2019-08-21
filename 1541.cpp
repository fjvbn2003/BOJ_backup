#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s;
    int count = 0;
    vector<char> arr_c;
    arr_c.push_back('+');
    vector<int> arr_i;
    cin>>s;
    int s_len = s.size();
    for(int i=0; i<s_len; i++){
        if(s[i]=='-' || s[i]== '+'){
            arr_i.push_back(stoi(s.substr(i-count, count)));
            arr_c.push_back(s[i]);
            count = 0;
        }
        else{
            count++;
        }
    }
    arr_i.push_back(stoi(s.substr(s_len-count, count)));

    // for(int i=0; i<arr_i.size(); i++){
    //     cout <<arr_i[i]<<" ";
    // }
    // cout <<endl;
    //  for(int i=0; i<arr_c.size(); i++){
    //     cout <<arr_c[i]<<" ";
    // }
    // 초기값 더하기
    int ans=0;
    int p_sum=0;
    bool flag= false;
    for(int i=0; i<arr_c.size(); i++){
        if(arr_c[i]=='-'){
            ans -= arr_i[i];
            flag = true;    
        }else{
            if(flag){ans-= arr_i[i];}
            else{ans+=arr_i[i];}
        }
    }
    cout <<ans<<endl;
}