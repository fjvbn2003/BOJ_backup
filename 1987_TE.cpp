#include <iostream>
#include <vector>
#include <string>
using namespace std;
int r, c;
char arr[20][20];
int ans = 0;
//상하좌우
int dy[] = {1,-1,0,0};
int dx[] = {0, 0,-1,1};
void dfs(int y, int x, string cc){
	//선형탐색으로 지금까지 방문했던 문자를 현재위치의 문자와 일치하는지 검사
	for(int i=0; i<cc.size(); i++){
		if(arr[y][x] == cc[i]){
			//일치한다면 바로 함수 종료
			return;
		}
	}
	// c에 현재의 문자를 추가
	cc += arr[y][x];
	if(ans < cc.size()){
		ans = cc.size();
	}
	for(int i=0; i<4; i++){
		int ny = y+dy[i];
		int nx = x+dx[i];
		if(ny>=0 && ny <r && nx>=0 && nx <c){
			dfs(ny,nx,cc);
		}
	}
	
}

int main(){

	string t;
	cin>> r>>c;
	for(int i=0; i<r; i++){
		cin>> t;
		for(int j=0; j<c; j++){
			arr[i][j] = t[j];
		}
	}
	dfs(0,0,"");
	// for(int i=0; i<r; i++){
	// 	for(int j=0; j<c; j++){
	// 		cout <<arr[i][j]<< " ";
	// 	}
	// 	cout <<endl;
	// }
	cout <<ans<<endl;
	
}