#include <iostream>
#include <vector>

using namespace std;
int ans = 0;
int n,m, r,c,dir;
int arr[50][50];
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};


//int memo[50][50] ={0,};

void dfs(int y, int x, int d){
	if(arr[y][x]==1){return;}
	if(arr[y][x]==0){
		ans++;
		arr[y][x] = 2;
	}
		
	for(int i=0; i<4; i++){
		int next_dir = d-1 <0 ? 3 : d-1;
		int ny = y+dy[next_dir], nx = x+dx[next_dir];
		if(arr[ny][nx] ==0){
			dfs(ny,nx,next_dir);
			return;
		}else{
			d = next_dir;
		}
	}
		
	int ny = y-dy[d], nx = x-dx[d];
	dfs(ny,nx,d);
	
}


int main(){
	

	cin>> n>>m>>r>>c>>dir;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>> arr[i][j];
		}
	}
	dfs(r,c,dir);
	cout <<ans<<endl;
}