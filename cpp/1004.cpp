#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct point{
    int x;
    int y;
    point(int a=0,int b=0): x(a), y(b){}
};
struct circle{
    int x;
    int y;
    int r;
    circle(int a, int b, int c): x(a), y(b), r(c){}
};

point from,to;

bool is_in(point p, circle c){
    return pow(c.r,2) > (pow(c.x-p.x,2)+pow(c.y-p.y,2));
}


int main(){
    int t,n_p,a,b,c;
    cin>> t;
    while(t--){
        vector<circle> arr;
        int cnt =0;
        cin>> from.x>>from.y>>to.x>>to.y;
        cin>> n_p;
        for(int i=0; i< n_p; i++){
            cin>>a>>b>>c;
            arr.push_back(circle(a,b,c));
        }
        
        for(int i=0; i< n_p; i++){
            //바깥원 -> 안에원 +1
            if(!is_in(from, arr[i])&& is_in(to, arr[i])){cnt++;}
            //안에원 -> 바깥원 +1
            else if(is_in(from,arr[i])&& !is_in(to,arr[i])){ cnt++;}
            else{}
        }
        cout <<cnt<<endl;
    }

}