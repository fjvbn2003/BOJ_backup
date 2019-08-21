#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    long long memo[50000];
    long long arr[50000];
int main(){
    int n, t;

    cin>>n;
    //memo, arr초기화

    for(int i=1; i<=n; i++){
        int start_idx = ((i*(i-1))/2) +1;
        //cout <<i<<" : start_idx "<<start_idx <<endl;
        for(int j=0; j<i; j++){
            cin>>t;
            arr[start_idx+j] = t;
        }
    }

    // i는 tree level
    for(int i=1; i<=n; i++){
        int start_idx = ((i*(i-1))/2) +1;
        int parent_s_idx = start_idx - (i-1);
        //cout << "i : " << i<<endl;
        //cout <<"parents idx "<<parent_s_idx <<endl;
        //cout <<"start idx "<<start_idx <<endl;
        
        for(int j= start_idx; j<start_idx+i; j++){
            if(j== start_idx){
                memo[j] = memo[parent_s_idx]+arr[j];
                //cout <<" memo[j] "<<memo[j]<<" memo[parent_s_idx] :"<<memo[parent_s_idx]<<" arr[j]: "<<arr[j]<<endl;

            }
            else if(j ==  start_idx+i-1){
                //cout <<"two"<<endl;
                memo[j] = memo[parent_s_idx]+arr[j];
                //cout <<" memo[j] "<<memo[j]<<" memo[parent_s_idx] :"<<memo[parent_s_idx]<<" arr[j]: "<<arr[j]<<endl;

            }
            else{
                //cout <<"three"<<endl;
                memo[j] = max(memo[parent_s_idx]+arr[j], memo[parent_s_idx+1]+arr[j]);
                //cout <<" memo[j] "<<memo[j]<<" memo[parent_s_idx] :"<<memo[parent_s_idx]<<" arr[j]: "<<arr[j]<<endl;
                parent_s_idx++;

            }
            //cout << j <<" ";
        }
        //cout << endl;
    }
    // for(int i=1; i<=n; i++){
    //     int start_idx = ((i*(i-1))/2) +1;    
    //     for(int j= start_idx; j<start_idx+i; j++){
    //         cout << memo[j]<<" ";
    //     }
    //     cout << endl;
    // }
    // memo 트리의 마지막 레벨에서 최댓값 조사.
    long long ans = 0;        
    int start_idx = ((n*(n-1))/2) +1;
    for(int i=start_idx; i<start_idx+n; i++){
        if(memo[i] >ans){
            ans = memo[i];
        }
    }
    cout << ans<<endl;
}