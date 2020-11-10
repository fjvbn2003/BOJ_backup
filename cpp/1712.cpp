#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cin >> a>> b>> c;
    if(b>=c){cout <<-1<<endl; return 0;}
    double tmp =  (double)a/(double)(c-b);
    long long ans;
    if(tmp- (long long)tmp >0.0000000001){
        ans = ceil(tmp);
    }else{
        ans = (int)tmp+1;
    }
    cout <<ans<<endl;

}