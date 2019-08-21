#include <iostream>
#include <cstdio>
#include <queue>


using namespace std;

int main(){
    int n, t;
    priority_queue<int> q;
    scanf("%d",&n);
    for(int i=0;i<n; i++){
        scanf("%d",&t);
        if(t==0){
            if(q.empty()){printf("0\n");}
            else{printf("%d\n",q.top()); q.pop();}
        }else{
            q.push(t);
        }
    }
    return 0;

}