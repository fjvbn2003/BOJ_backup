#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> ans;
char eq[10];
int visit[10];
int memo[10];
int permu(int idx, int n){
    if(idx==n){
        int s= 0;
        int it = 1;
        for(int i=n-1; i>=0; i--){
            s += memo[i]*it;
            it*=10;
        }
        ans.push_back(s);
    }
    for(int i=0; i<10; i++){
        if(visit[i] == 0){
            if(idx >0 && eq[idx-1] == '>' && memo[idx-1] > i){
                memo[idx] = i;
                visit[i] = 1;
                permu(idx+1,n);
                
                visit[i] = 0;
            }else if(idx >0 && eq[idx-1] == '<' && memo[idx-1] < i){
                memo[idx] = i;
                visit[i] = 1;
                permu(idx+1,n);
                visit[i] = 0;
            }
            else if(idx==0){
                memo[idx] = i;
                visit[i] = 1;
                permu(idx+1,n);
                visit[i] = 0;
            }else{
                continue;
            }
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>> eq[i];
    }
    permu(0,n+1);
    // for(int i=0; i<ans.size(); i++){
    //     cout << ans[i]<<endl;
    // }
    sort(ans.begin(), ans.end());
    cout.width(n+1);
    cout.fill(0);
    cout << ans[ans.size()-1]<<endl;
    cout.width(n+1);
    cout.fill('0');
    cout <<ans[0]<<endl;
}