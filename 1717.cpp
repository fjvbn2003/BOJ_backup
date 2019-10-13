#include <iostream>
#include <vector>
// 유니온 파인드 구조로 풀어보자.
// 너의 형님은 누구냐 계속 물어보고, 사이즈가 큰 형님 밑 작은 얘가으로 들어가자.
using namespace std;
int arr[1000001];
pair<int,int> find(int x){
    int k = x;
    int s = 0;
    while(1){
        if(k == arr[k]){
            break;
        }                
        k = arr[k];
        s++;
    }
    return {k, s};
}
void uinon(int x, int y){
    auto a = find(x);
    auto b = find(y);
    if(a.first != b.first){
        if(a.second >b.second){
            arr[b.first] = a.first;
         }else{
            arr[a.first] = b.first;
        }
    }
    return;
}


int main(){
    int n, m;
    int o,a,b;
    cin >> n>>m;
    for(int i=0; i<=n; i++){
        arr[i] = i;
    }
    for(int i=0; i<8; i++){
        cin>> o>>a>>b;
        if(o==0){
            uinon(a,b);
        }else{
            if(find(a).first==find(b).first){
                cout <<"YES"<<endl;
            }else{
                cout <<"NO"<<endl;
            }
        }

    }
}