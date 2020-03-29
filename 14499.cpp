#include <iostream>
using namespace std;
int n,m;
int g_map[20][20]={0};
// 주사위를 어떻게 자료형으로 모델링 할 것인가..?
// 크기 6의 배열로 표현!
int dice[6]={0};
// 동서북남!! 동서남북 아님!
int dy[4] = {0,0,-1,1};
int dx[4] = {1,-1,0,0};


int main(){
	int x,y;
	int k;
	// 입력받는 순서가 x,y가 아니라 y,x 임!
	// !!!!!!!!!!!!!!! 주의 !!!!!!!!!!!!!!!!!
	cin>> n>>m>>y>>x>>k;
	// 맵을 입력받기
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>> g_map[i][j];
		}
	}
	int t;
	int t_dice[6];
	for(int i=0; i<k; i++){
		cin>> t;
		// 인덱스가 0부터 시작하니깐 t를 1만큼 줄여줌
		t--;
		// 맵 밖이라면 반복문 탈출
		if(y+dy[t]<0 ||y+dy[t]>=n || x+dx[t]<0||x+dx[t]>=m) {continue;}
		
		for(int j=0; j<6; j++){t_dice[j] = dice[j];}
		y = y + dy[t];
		x = x + dx[t];
		//동쪽
		if(t==0){
			//동쪽
			//2,5 면은 움직이지 않음
			dice[2] = t_dice[0];
			dice[0] = t_dice[3];
			dice[3] = t_dice[5];
			dice[5] = t_dice[2];
			
		}else if(t==1){
			// 서쪽	
			//2,5 면은 움직이지 않음
			dice[0] = t_dice[2];
			dice[3] = t_dice[0];
			dice[5] = t_dice[3];
			dice[2] = t_dice[5];
		}else if(t==2){
			// 북쪽
			//3,4 면은 움직이지 않음
			dice[0] = t_dice[1];
			dice[4] = t_dice[0];
			dice[5] = t_dice[4];
			dice[1] = t_dice[5];
		}else{
			// 남쪽
			//3,4 면은 움직이지 않음
			dice[1] = t_dice[0];
			dice[0] = t_dice[4];
			dice[4] = t_dice[5];
			dice[5] = t_dice[1];
		}
		// 만약 바닥에 0이 씌여있다면 주상위 바닥에 있는 숫자를 바닥에 복사
		if(g_map[y][x] ==0){
			g_map[y][x] = dice[5];
		}else{
			// 바닥에 0이 아닌 숫자가 씌여있다면 '주사위 바닥면'에 그 숫자를 복사
			dice[5] = g_map[y][x];
			// 그리고 바닥에 숫자를 0으로 변경
			g_map[y][x] = 0;
		}
		cout << dice[0]<<"\n";
	}
	
	return 0;
}