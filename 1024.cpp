#include <iostream>
using namespace std;

int main(){
    long long n, l;
    cin >> n >> l;
        // 수열의 길이
    for(int i=l ; i<=100; i++){
        int t = (i*(i-1))/2;
        if((n-t)%i == 0 && (n-t)/i >=0){
            int b = (n-t)/i;
            for(int k=0; k<i; k++){
                cout <<  b + k<<" ";
            }    
            cout <<endl;
            return 0;
        }
    }
    cout <<-1<<endl;
}