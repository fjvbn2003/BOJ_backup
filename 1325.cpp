#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr[10001];
int memo[10001];

bool comp(pair<int, int> &a , pair<int,int> b){
    if(a.first == b.first){return a.second<b.second ;}
    return a.first>b.first;
}   
int count;

int DFS(int a){
    int count = 0;
    for(int i=0; i<10001; i++){memo[i] =0;}
    memo[a] = 1;
    count++;
    for( int k : arr[a]){
        if(memo[k]!=1){
            count += DFS(k);
        }
    }
    return count;
}

int main(){
    int n, m;
    int a, b;
    vector<pair<int,int> > rank;
    cin>> n>>m;

    for(int i=0; i< m; i++){
        cin >> a >> b;
        arr[b].push_back(a);
    }
    int max_cnt = 0;
    for(int i=1; i<=n; i++){
        int cnt = DFS(i);
        rank.push_back({cnt, i});
        if(cnt>max_cnt){max_cnt = cnt;}
    }
    sort(rank.begin(), rank.end(), comp);
    for(int i=0; i< rank.size(); i++){
        if(rank[i].first < max_cnt){break;}
        cout << rank[i].second<<" ";
    }
    cout <<endl;
    return 0;
}