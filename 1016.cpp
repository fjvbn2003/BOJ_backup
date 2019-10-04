#include <iostream>
using namespace std;
int main(){
    long long min, max;
    cin >> min >> max;
    int ans = 0;
    for(long long i = min; i<=max; i++){
        bool flag = true;
        long long k = 2;
        while(1){
            if(k*k >i){break;}
            if(i%(k*k) == 0){
                flag = false;
                break;
            }
            k++;
        }
        if(flag){ans++;}
    }
    cout << ans<<endl;

}