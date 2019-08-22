#include <iostream>
using namespace std;

int main(){
    int arr[3];
    while(1){
        cin >> arr[0]>> arr[1]>> arr[2];
        if(arr[0]==0){ return 0;}
        int m_d = 0;
        int m_i = 0;
        for(int i=0; i<3; i++){
            if(m_d<arr[i]){m_d = arr[i]; m_i=i;}
        }
        int s_sum = 0;
        for(int i=0; i<3; i++){
            if(m_i == i){continue;}
            s_sum+=arr[i]*arr[i];
        }
        if(s_sum== arr[m_i]*arr[m_i]){cout <<"right"<<"\n";}
        else{cout <<"wrong"<<"\n";}
    }

}