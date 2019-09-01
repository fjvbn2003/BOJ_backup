#include <iostream>
using namespace std;
int arr[128][128];
int b;
int w;
void quad(int x, int y, int n){
    int half = n/2;
    int color = arr[x][y];
    for(int i=x;i<x+n; i++){
        for(int j=y; j<y+n; j++){
            if(arr[i][j] != color){
                quad(x, y, half);
                quad(x+half, y, half);
                quad(x, y+half, half);
                quad(x+half, y+half, half);
                return;
            }
        }
    }
    if(color == 1){b++;}
    else{w++;}


}


int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    quad(0,0,n);
    cout <<w<<endl;
    cout <<b<<endl;

}