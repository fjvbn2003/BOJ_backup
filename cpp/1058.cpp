#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int n;
int arr[50][50];
int friends[50];
void dfs2(int i, int cnt){
	if(cnt >2) return;
	if(friends[i] && cnt==2) return;
	for(int j=0; j<n ; j++){
		if(arr[i][j]){
			friends[j] = 1;
			dfs2(j,cnt+1);
		}
	}
	
}

int main(){
	string s;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		for(int j=0; j<n; j++){
			if(s[j]=='Y'){arr[i][j] = 1;}
		}
	}
	int answer = 0;
	for(int i=0; i<n; i++){
		int tmp = 0;
		for(int j=0; j<50; j++)
			friends[j]=0;
		dfs2(i,0);
		friends[i] = 0;
		for(int j=0; j<50; j++)
			if(friends[j])
				tmp++;
		//cout <<" i "<<i<<" tmp "<<tmp<<endl;
		answer = max(answer,tmp);
	}
	cout <<answer<<endl;
}