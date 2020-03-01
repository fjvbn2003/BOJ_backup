#include <iostream>
#include <vector>
#include <string>
using namespace std;
int r, c;
char arr[20][20];
int memo[25]= {0,};
int ans = 0;
//상하좌우
int dy[] = {1,-1,0,0};
int dx[] = {0, 0,-1,1};
void dfs(int y, int x, int l){
	//선형탐색으로 지금까지 방문했던 문자를 현재위치의 문자와 일치하는지 검사
	// 선형탐색을 hash로 검사해보자.!! 존재하는지 검사!!
	// 1000000 * 1 = 백만!
	
	if(memo[arr[y][x]-65] == 1){return;}
	memo[arr[y][x]-65] = 1;
	if(l>ans){
		ans = l;
	}
	for(int i=0; i<4; i++){
		int ny = y+dy[i];
		int nx = x+dx[i];
		if(ny>=0 && ny <r && nx>=0 && nx <c){
			dfs(ny,nx,l+1);
		}
	}
	memo[arr[y][x]-65] = 0;
	
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
	dfs(0,0,1);
	// for(int i=0; i<r; i++){
	// 	for(int j=0; j<c; j++){
	// 		cout <<arr[i][j]<< " ";
	// 	}
	// 	cout <<endl;
	// }
	cout <<ans<<endl;
	
}