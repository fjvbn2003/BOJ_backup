#include <iostream>
#include <vector>

using namespace std;

int main(){
    int e, s, m;
    cin >> e>>s>> m;
    int x = 0;
    
    while(true){
        if(x%15 + 1 == e && x%28 + 1 == s && x%19 +1==m){
            cout <<x+1<<endl;
            return 0;
        }
        x++;
    }

}