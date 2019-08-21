#include <iostream>
using namespace std;

int main(){
    int x[3];
    int y[3];
    for(int i=0; i<3; i++){
        cin >> x[i]>>y[i];
    }
    int dig_idx = 0;
    for(int i=0; i<3; i++){
        bool flag = false;
        for(int j=0; j<3; j++){
            if(i==j) continue;
            if(x[i] != x[j] && y[i] != y[j]){
                flag = true;
                break;
            }
        }
        if(!flag){
            dig_idx = i;
            break;
        }
    }
    int s_x= 0;
    int s_y =0;
    for(int i=0; i<3; i++){
        if(i != dig_idx){
            s_x += x[i]; s_y += y[i];
        }
    }
    cout << s_x-x[dig_idx]<< " "<< s_y-y[dig_idx];

}