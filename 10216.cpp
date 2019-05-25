#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct enemy{
    int x;
    int y; 
    int r;
};

vector<enemy> arr(3001);
int link[3001];
int size[3001];

int find (int x){
    while(x != link[x]) x= link[x];
    return x;
};

void union2 (int a, int b){
    a = find(a);
    b = find(b);
    if(size[a] <size[b]) swap(a,b);
    size[a] += size[b];
    link[b] = a;
};

bool same (enemy a, enemy b){
    int r = pow(a.r+b.r,2);
    int dist = pow(a.x - b.x, 2) +pow(a.y - b.y , 2);
    if(r >=dist) return true;
    else return false;

}

int main(){
    int test_case;
    cin >> test_case;

    while(test_case--){
        int n, x, y, r;
        for(int i=0; i<3001; i++){ //초기화
            link[i] = i;
            size[i] = 1;
        }
        arr.clear();
        cin>> n;
        for(int i=0; i<n ;i++){
            cin >> x >> y>> r;
            arr[i] = enemy();
            arr[i].x = x;
            arr[i].y = y;
            arr[i].r = r;
            
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(same(arr[i], arr[j])){
                    union2(i, j);
                }
            }
        }
        set<int> s;
        for(int i=0; i<n; i++){
            s.insert(find(i));
        }
        cout <<s.size()<<endl;
    }
        
}