#include <iostream>
using namespace std;
long long memo[1001][1001];
long long bino(long long a, long long b){
    if(memo[a][b]>0){return memo[a][b];}
    if(a==b | b==-0){
        return 1;
    }
    memo[a][b] = (bino(a-1, b-1) +bino(a-1, b))%(long long)1000000007;
    return memo[a][b];

}

int main(){
    long long a, b;
    cin >> a>> b;
    cout << bino(a, b)<<endl;
    return 0;

}