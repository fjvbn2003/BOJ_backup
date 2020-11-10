#include <iostream>
#include <stdio.h>
using namespace std;

const int MAX = 1000001;
int N,M;
//부모 찾는 여산
/* 초기화 */
int root[MAX];
int ran[MAX]; // 트리의 높이를 저장할 배열

/* find(x): 재귀 이용 */
int find(int x) { // 동일
  if (root[x] == x) {
      return x;
  } else {
      // "경로 압축(Path Compression)"
      // find 하면서 만난 모든 값의 부모 노드를 root로 만든다.
      return root[x] = find(root[x]);
  }
};

/* uni1(x, y): uni-by-ran 최적화 */
void uni (int x, int y){
   x = find(x);
   y = find(y);

   // 두 값의 root가 같으면(이미 같은 트리) 합치지 않는다.
   if(x == y)
     return;

   // "uni-by-ran 최적화"
   // 항상 높이가 더 낮은 트리를 높이가 높은 트리 밑에 넣는다. 즉, 높이가 더 높은 쪽을 root로 삼음
   if(ran[x] < ran[y]) {
     root[x] = y; // x의 root를 y로 변경
   } else {
     root[y] = x; // y의 root를 x로 변경

     if(ran[x] == ran[y])
       ran[x]++; // 만약 높이가 같다면 합친 후 (x의 높이 + 1)
   }
}


int main(){
    cin.tie(0);
    cin>> N>>M;
    for (int i = 0; i <= N; i++) {
        root[i] = i;
        ran[i] = 0; // 트리의 높이 초기화
    }
    int o,a,b;
    for(int i=0; i<M; i++){
      cin>> o>>a>>b;
      if(o == 0){
        uni(a,b);
      }else{
        if(find(a) == find(b)){
          printf("YES\n");
        }else{
          printf("NO\n");
        }
      }
    }

}