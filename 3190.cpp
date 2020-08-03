#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n,k,l;
int arr[101][101];
// 2은 사과가 있을 때, 0은 비어있는 곳, 1는 뱀이 있는 곳
int main(){
	for(int i=0; i<101; i++)
		for(int j=0; j<101; j++)
			arr[i][j] =0;

	int x,y;
	char c;
	queue<pair<int,char>> q;
	vector<pair<int,int>> s;
	cin>>n>>k;
	for(int i=0; i<k; i++){
		cin>>y>>x;
		arr[y][x] = 2;
	}
	cin>>l;
	for(int i=0; i<l; i++){
		cin>>x>>c;
		q.push(make_pair(x,c));
	}

	int t = 1;
	int d = 0;
	arr[1][1] = 1;
	s.push_back({1,1});
	int dx[4] = {1,0,-1,0};
	int dy[4] = {0,-1,0,1};
	y = x =1;
	while(1){
		

		//이동
		y = s.front().first;
		x = s.front().second;
		
		//cout<<"before: "<<x<<endl;
		y += dy[d];
		x += dx[d];
		//cout<<"after: "<<x<<endl;
		
		//cout <<"time: "<<t<<" "<<y<<" "<<x<<" d: "<<d<<" s.size(): "<<s.size()<<endl;
		//cout<<"arr[1][2]: "<<arr[1][2]<<endl;
		// 검사꼬리가 있는지 사과가 있는지, 맵 밖인지..
		if(y<1 || y>n || x<1 || x>n || arr[y][x] ==1)
			break;
		//eating apple
		if(arr[y][x] == 2){
			arr[y][x] = 1;
			s.push_back({y,x});
			for(int i=s.size()-1; i>=1; i--){
            		s[i].first = s[i-1].first;
					s[i].second = s[i-1].second;
            }
			//cout <<"in eating apple x: "<<x<<endl;
            s[0].first =y;
        	s[0].second =x;

		}else{
			// 뱀의 머리위치를 맵에 표시
			arr[y][x] = 1;
			// 뱀의 꼬리 위치를 맵에서 지움
			int ty = s.back().first;
			int tx = s.back().second;
			
			//cout <<"s.size(): "<<s.size()<<" ty: "<<ty<<" tx: "<<tx<<endl;
			arr[ty][tx] = 0;
			// 뱀의 각각의 몸통의 위치를 한칸씩 뒤로 미룸
			
			if(s.size()>1){
				for(int i=s.size()-1; i>=1; i--){
					s[i].first = s[i-1].first;
					s[i].second = s[i-1].second;
					
				}
			}
			//cout <<"in else x: "<<x<<" y: "<<y<<endl;
			s[0].first =y;
			s[0].second =x;
		}
		
		//방향전환
		if(!q.empty() && q.front().first == t){\
			
			pair<int,char> tmp = q.front();
			q.pop();
			if(tmp.second == 'L'){
				d = (d+1)%4;
			}else{
				d = (d+3)%4;
			}
			//cout <<"방향전환: "<< d<<endl;
		} 
		// cout <<"time: "<<t<<endl;
		// for(int i=1; i<=n; i++){
		// 	for(int j=1; j<=n; j++){
		// 		cout<<arr[i][j]<<" ";
		// 	}
		// 	cout <<endl;
		// }	
		// cout <<endl;
		t++;
	}

	cout <<t<<endl;
}
