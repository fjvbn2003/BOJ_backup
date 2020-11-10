#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int my_min(int a, int b){return a<b? a: b;}

int main(){
    int m,n;
    cin>> n>>m;
    int a,b, min_one = 123456789, min_set=123456789;
    while(m--){
        cin>>a>>b;
        min_set = my_min(a, min_set);
        min_one = my_min(b, min_one);
    }
    min_set = min(min_one*6, min_set);
    int ans = (n/6)*min_set + my_min(n%6*min_one, min_set);
 
    cout <<ans <<endl;
}