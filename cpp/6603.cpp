#include <iostream>

using namespace std;
int k;
int arr[13];
int data[6];
void combination(int count, int idx){
    // cout << "count: " <<count <<"  idx: "<< idx<<endl;
    // for(int i=0; i<count; i++){
    //     cout << data[i]<<" ";
    // }
    // cout<<endl;
    if(count == 6){
        //cout <<"HIHIHIHIHIHIHIHIHIHI"<<endl;
        for(int i=0;i<6; i++){cout <<data[i]<<" ";}
        cout <<endl; return ;
    }
    if(idx>=k){return;}
    data[count] = arr[idx];
    combination(count+1, idx+1);
    combination(count, idx+1);


}

int main(){
    while(1){
        for(int i=0; i<6; i++){data[i] = 0;}
        for(int i=0; i<13; i++){arr[i] = 0;}
        
        cin >> k;
        if(k==0){break;}
        for(int i=0; i<k; i++){
            cin>> arr[i];
        }
        combination(0, 0);
        cout <<endl;
    }
    

}