#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b,c;
    cin>> a>>b;
    int len_a = a.size();
    int len_b = b.size();
    int idx_a,idx_b,val_a,val_b;
    int t,carry, v;
    carry = 0;
    c = "";
    int len_c = (len_a>len_b)? len_a : len_b;
    //cout <<"len c: "<<len_c<<endl;
    for(int i=0; i<len_c ;i++){
        idx_a = len_a-i-1;
        idx_b = len_b-i-1;
        //cout << idx_a <<" "<<idx_b<<endl;
        val_a = (idx_a>=0)? a[idx_a]-'0' : 0;
        val_b =  (idx_b>=0)? b[idx_b]-'0' : 0;
        //cout <<"val a: "<<val_a<< " val b: "<<val_b<<endl;
        t = val_a + val_b + carry;
        carry = (t>10)? 1:0;
        v = t%10;
        //cout <<"carry : "<< carry <<" value : " <<v<<endl;
        c = to_string(v)+c;
    }
    if(carry){c = "1"+c;}
    cout << c<<endl;
}