#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,M,K,tmp;
    cin >>N>>M;
    vector<int> a[N];

    for(int i=0; i< N; i++){
        for(int j=0; j<M; j++){
            cin>>tmp;
            a[i].push_back(tmp);
        }
    }
    cin>>M>>K;
    vector<int> b[M];
    for(int i=0; i< M; i++){
        for(int j=0; j<K; j++){
            cin>>tmp;
            b[i].push_back(tmp);
        }
    }

    for(int i=0; i<N; i++){
        for(int k=0; k<K;k++){
            int sum = 0;
            for(int j=0; j<M; j++){
                sum+=a[i][j]*b[j][k];
            }
            cout <<sum<<" ";
        }
        cout<<"\n";
    }
}
