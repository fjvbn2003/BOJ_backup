#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int arr[101][101][101];
int visited[101][101][101];
int dx[6] = {1,-1,0,0,0,0};
int dy[6] = {0,0,1,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

int main(){
	int M,N,H;
	cin>> M>>N>>H;
	queue<pair<pair<int,int>, int> > q;
    for(int k=0; k<H; k++){
	    for(int i=0; i< N; i++){
		    for(int j=0; j<M; j++){
                visited[i][j][k] = -1;
            }
		}
	}

    for(int k=0; k<H; k++){
	    for(int i=0; i< N; i++){
		    for(int j=0; j<M; j++){
			    cin >> arr[i][j][k];
			    if(arr[i][j][k]==1){
				    q.push({{i,j},k});
				    visited[i][j][k] = 0;
			    }
            }
		}	
	}

	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		int x = cur.first.first;
		int y= cur.first.second;
        int z = cur.second;
		//cout <<"x, y "<<x<<y<<endl;
		for(int i=0; i<6; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
            int nz = z+dz[i];
			//cout <<"nx ny "<<nx<<" "<<ny<<" M,N "<<M<<" "<<N<<endl;
			if(nx>=0 && nx<N && ny>=0 && ny<M && nz>=0 && nz<H ){
				//cout <<nx<<" "<<ny<<endl;
				if(arr[nx][ny][nz] != -1 && visited[nx][ny][nz] == -1){
					//cout <<nx<<" "<<ny<<endl;
					q.push({{nx,ny},nz});
					visited[nx][ny][nz]= visited[x][y][z]+1;
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
    for(int k=0; k<H; k++){
	    for(int i=0; i< N; i++){
		    for(int j=0; j<M; j++){
			    mx = max(mx, visited[i][j][k]);
		    	// arr의 -1이 아니고 동시에 visit되지 않은 토마토가 있을 때
			    if(arr[i][j][k]!=-1&&visited[i][j][k] == -1){
				    flag = true;
				    break;
			    }
            }
		}
		if(flag){break;}
	}
	if(flag){cout <<-1<<endl;}
	else{
		cout <<mx<<endl;
	}
}