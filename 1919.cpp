#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string a,b;
    int ans = 0;
    int c_a[26];
    int c_b[26];
    cin >> a>>b;
    for(int i=0; i<26; i++){
        c_a[i] = 0;
        c_b[i] = 0;
    }

    for(int i=0; i<a.size(); i++){
        c_a[a[i]-'a']++;
    }
    for(int i=0; i<b.size(); i++){
        c_b[b[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        ans += abs(c_a[i]-c_b[i]);
    }
    cout << ans <<endl;
}