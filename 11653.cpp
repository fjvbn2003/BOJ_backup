#include <iostream>
#include <vector>
using namespace std;
bool seive[1000001];
// 2019년 8월 23일 오후 3시 BOJ 11653 풀이 시작
// 계획: 
//  에라스토 테네스의 채를 이용해서 10,000,000 이하의 소수를 구해서 
// 소인수 분해를 해보자.

int main(){
    for(int i=2; i<1000001; i++){
        if(seive[i]){continue;}
        int it = i;
        int k = 2;
        while(it<1000001){
            //cout <<it<<endl;
            it = i*k;
            seive[it] = true;
            k++;
        }
    }
    for(int i=0; i<101; i++){
        if(!seive[i]){cout <<i<<" ";}
    }
}
// bool 배열은 천만까지는 잡히지 않는다.