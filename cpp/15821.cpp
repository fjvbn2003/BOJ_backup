#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long dist(int a, int b){
    return a*a+b*b;
}

int main(){

    int K, N, num;
    int x,y;
    vector<long long> arr;
    cin >>N>>K;
    int m = -987654321;
    for(int i=0; i< N; i++){
        cin >> num;
        m = -987654321;
        for(int j=0; j<num; j++){
            cin >> x>>y;    
            m = (m> dist(x,y))? m : dist(x,y);
            //cout <<m<<endl;
        }
        arr.push_back(m);
    }
    sort(arr.begin(), arr.end());
    //for(int i=0; i< N; i++){
     //   cout <<arr[i]<<endl;    
    //}
    cout <<arr[K-1]<<".00\n";



}