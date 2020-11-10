#include <iostream>
using namespace std;
int n;
int col[15];
int result = 0;

bool promising(int i){
    for(int j=0; j<i; j++){
        if(col[j] == col[i] || abs(col[i]-col[j]) == (i-j))
            return false;
    }
    return true;
}
void N_Queen(int i){
    if(i==n)
        result +=1;
    else{
        for(int j=0; j<n; j++){
            col[i] = j;
            if(promising(i))
                N_Queen(i+1);
        }

    }
}

int main(){
    cin>> n;
    N_Queen(0);
    cout <<result<<endl;
    return 0;

}