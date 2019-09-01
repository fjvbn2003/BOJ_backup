#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int i = 1;
    int sum = 0;
    int min_i =-1;
    bool check = false;
    while(1){
        if(i*i >n){break;}
        if(m<= i*i && i*i<=n){
            if(!check){min_i = i*i; check = true;}
            sum+= i*i;
        }
        i++;
    }
    if(!check){cout <<-1<<endl;return 0;}
    cout <<sum<<endl;
    cout <<min_i<<endl;

}
