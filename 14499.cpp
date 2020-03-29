#include <iostream>
using namespace std;
int n,m;
int g_map[20][20]={0};
// 주사위를 어떻게 자료형으로 모델링 할 것인가..?
int dice[6]={0};
int dy[4] = {0,0,-1,1};
int dx[4] = {1,-1,0,0};


int main(){
	int x,y;
	int k;
	cin>> n>>m>>y>>x>>k;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>> g_map[i][j];
		}
	}
	int t;
	int t_dice[6];
	for(int i=0; i<k; i++){
		cin>> t;
		t--;
		//cout <<"t is "<< t<<endl;
		if(y+dy[t]<0 ||y+dy[t]>=n || x+dx[t]<0||x+dx[t]>=m) {continue;}
		
		for(int j=0; j<6; j++){t_dice[j] = dice[j];}
		y = y + dy[t];
		x = x + dx[t];
		//동쪽
		if(t==0){
			//2,5 면은 움직이지 않음
			dice[2] = t_dice[0];
			dice[0] = t_dice[3];
			dice[3] = t_dice[5];
			dice[5] = t_dice[2];
			
		}else if(t==1){
			// 서쪽	
			dice[0] = t_dice[2];
			dice[3] = t_dice[0];
			dice[5] = t_dice[3];
			dice[2] = t_dice[5];
		}else if(t==2){
			// 북쪽
						dice[0] = t_dice[1];
			dice[4] = t_dice[0];
			dice[5] = t_dice[4];
			dice[1] = t_dice[5];
			
			
		}else{
			// 남쪽
dice[1] = t_dice[0];
			dice[0] = t_dice[4];
			dice[4] = t_dice[5];
			dice[5] = t_dice[1];
		}
		if(g_map[y][x] ==0){
			g_map[y][x] = dice[5];
		}else{
			dice[5] = g_map[y][x];
			g_map[y][x] = 0;
		}
		cout << dice[0]<<"\n";
	}
	
	// for(int i=0; i<n; i++){
	// 	for(int j=0; j<m; j++){
	// 		cout <<g_map[i][j]<<" ";
	// 	}
	// 	cout <<endl;
	// }
	return 0;
}