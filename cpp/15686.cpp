#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int arr[51][51];
int m,n;
vector<pair<int,int>> houses;
vector<pair<int,int>> chickens;
vector<pair<int,int>> selected;
int recur(int start ){
	cout <<"start: "<<start<<endl;
	for(int i=0; i<selected.size(); i++){
			cout << selected[i].first<<" "<< selected[i].second<<endl;
	}
	cout <<endl;
	if(selected.size() == m){
		int sum = 0;
		for(int i=0; i<selected.size(); i++){
			int tmp = 200;
			for(int j=0; j<houses.size(); j++){
				 tmp = min(tmp, abs(selected[i].first - houses[j].first) + abs(selected[i].second - houses[j].second));
			}
			sum+=tmp;
		}
		for(int i=0; i<selected.size(); i++){
			cout << selected[i].first<<" "<< selected[i].second<<endl;
		}
		cout <<"sum is : "<<sum<<endl;
		return sum;
	}
	if(start == m){return numeric_limits<int>::max();}
	int ret = numeric_limits<int>::max();
	for(int i=start; i<chickens.size(); i++){
		selected.push_back({chickens[i].first, chickens[i].second});
		ret  = min(ret, recur(start+1));
		//cout <<"ret1: "<<ret<<endl;
		selected.pop_back();
		ret = min(ret, recur(start+1));
		//cout <<"ret2: "<<ret<<endl;
	}
	return ret;
}


int main(){
	cin >> n >>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>> arr[i][j];
			if(arr[i][j] == 1){
				houses.push_back({i,j});
			}else if(arr[i][j] == 2){
				chickens.push_back({i,j});
			}else{
				continue;
			}
		}
	}

	cout << recur(0)<<endl;
	
	// for(int i=0; i<houses.size(); i++){
	// 	cout << houses[i].first<<" "<< houses[i].second<<endl;
	// }
	// cout <<endl;
	// for(int i=0; i<chickens.size(); i++){
	// 	cout<<chickens[i].first<<" "<< chickens[i].second<<endl;
	// }
	cout <<endl;

}