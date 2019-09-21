#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    while(1){
        cin >>n;
        if(n== -1){break;}

        int s = 0;
        // 최대 약수
        int idx = 0;
        for(int i=1; i<n; i++){
            if(n%i==0){s +=i;idx = (idx<i)? i: idx;}
        }
        if(s == n){
            cout << n<< " = ";
            for(int i=1; i<n; i++){
                if(idx == i){cout << i;break;}
                if(n%i==0){cout <<i<<" + ";}
            }
            cout <<endl;
        }else{
            cout << n<<" is NOT perfect.";
            cout <<endl;
        }

    }
    return 0;
}