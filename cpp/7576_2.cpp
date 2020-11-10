#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int arr[1001][1001];
int visited[1001][1001];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int main(){
	int M,N;
	cin>> M>>N;
	queue<pair<int,int> > q;

	for(int i=0; i< N; i++){
		for(int j=0; j<M; j++){
			visited[i][j] = -1;
		}
	}


	for(int i=0; i< N; i++){
		for(int j=0; j<M; j++){
			cin >> arr[i][j];
			if(arr[i][j]==1){
				q.push(make_pair(i,j));
				visited[i][j] = 0;
			}
		}	
	}

	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		int x = cur.first;
		int y= cur.second;
		//cout <<"x, y "<<x<<y<<endl;
		for(int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			//cout <<"nx ny "<<nx<<" "<<ny<<" M,N "<<M<<" "<<N<<endl;
			if(nx>=0 && nx<N && ny>=0 && ny<M){
				//cout <<nx<<" "<<ny<<endl;
				if(arr[nx][ny] != -1 && visited[nx][ny] == -1){
					//cout <<nx<<" "<<ny<<endl;
					q.push(make_pair(nx,ny));
					visited[nx][ny]= visited[x][y]+1;
				}
			}
			
		}

	}
	// debuging 용  print
	// for(int i=0; i< N; i++){
	// 	for(int j=0; j<M; j++){
	// 		cout <<visited[i][j]<<" ";
	// 	}
	// 	cout <<endl;
	// }
	int mx = 0;
	bool flag = false;
	for(int i=0; i< N; i++){
		for(int j=0; j<M; j++){
			mx = max(mx, visited[i][j]);
			// arr의 -1이 아니고 동시에 visit되지 않은 토마토가 있을 때
			if(arr[i][j]!=-1&&visited[i][j] == -1){
				flag = true;
				break;
			}
		}
		if(flag){break;}
	}
	if(flag){cout <<-1<<endl;}
	else{
		cout <<mx<<endl;
	}
}