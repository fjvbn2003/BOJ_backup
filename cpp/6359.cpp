#include <iostream>
using namespace std;
bool arr[101];
int main(){
    int t;
    int n;
    
    cin >> t;
    while(t--){
        int count=0;
        cin>> n;
        for(int i=1; i<=n; i++){
            arr[i] = true;
        }
        for(int i=2; i<=n; i++){
            int k =1;
            int j = i;
            while(j<=n){
                arr[j] = !arr[j];
                k++;
                j = i*k;
            }
        }
        for(int i=1; i<=n; i++){
            if(arr[i]){count++;}
        }
        cout << count << endl;
    }
    
}