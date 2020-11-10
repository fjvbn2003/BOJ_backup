#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test_case;
    int x1,y1,r1,x2,y2,r2;
    cin>>test_case;
    while(test_case--){
        cin>> x1>>y1>>r1>> x2>> y2>> r2;

        int dis = pow(x2-x1,2)+pow(y2-y1,2);
        int r = pow(r1+r2,2);
        if(r<dis){ cout <<0<<endl;}
        else if(r==dis){cout << 1<<endl;}
        else if(r>dis){
            int tmp = pow((r1-r2),2);
            if(tmp>dis){cout <<0<< endl;}
            else if(tmp==dis){
                if(dis==0){
                    cout << -1<<endl;
                }else{
                    cout <<1<<endl;
                }
            }else{
                cout <<2<<endl;
            }
        }
    
    }
    

    

}
