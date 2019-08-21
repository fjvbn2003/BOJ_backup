#include <iostream>
#include <vector>
using namespace std;
int memo[51];

int main(){
    int n,a,b;
    vector<pair<int,int> >arr;
    cin>> n;
    for(int i=0; i< n; i++){
        cin>>a>>b;
        arr.push_back({a,b});
    }
    
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(i==j){continue;}
            if(arr[i].first<arr[j].first && arr[i].second <arr[j].second){
                memo[i]++;
            }
        }
    }
    for(int i=0; i<n;i++){
        cout << memo[i]+1<< " ";
    }
    cout <<endl;
    return 0;
}