#include <iostream>
#include <string>
using namespace std;
int arr[50][50];
int n, m;
int solve(int y, int x){
    //cout <<y<<" "<<x<<endl;
    int k = arr[y][x];
    int z = 1;
    for(int i=y+1; i<n; i++){
        if(arr[i][x]==k){
            if(x+i-y <m && arr[i][x+i-y]==k){
                    if(arr[y][x+i-y]== k){
                        if((i-y+1)*(i-y+1)>z){z = (i-y+1)*(i-y+1);}
                    }
                }
            
        }
    }
    //cout <<"m: "<<m<<endl;
    return z;
}
int main(){
    string s;
    int t;
    cin >> n>> m;

    for(int i=0; i<n; i++){
        cin >>s;
        for(int j=0;j<m;j++){
            arr[i][j] = (s[j]-'0');
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0;j<m;j++){
    //         cout << arr[i][j]<<" ";
    //     }
    //     cout <<endl;
    // }

    int ans = -1;
    for(int i=0; i<n; i++){
        //cout<<"hi"<<endl;
        for(int j=0; j<m; j++){
            t = solve(i,j);
            //cout <<"t: "<<t<<endl;
            if(t>ans){
                ans = t;
            }
        }
    }
    cout <<ans<<endl;
    
    // for(int i=0; i<n; i++){
    //     for(int j=0;j<m;j++){
    //         cout << arr[i][j]<<" ";
    //     }
    //     cout <<endl;
    // }

}