#include <iostream>
using namespace std;

int main(){
	int t,n,m;
	cin>>t;
	for(int i=0; i<t; i++){
		int answer =0;
		cin>>n>>m;
		for(int j=n; j<=m; j++){
			int t =j;
			if(t ==0){ answer++; continue;}
			while(t){
				if(t%10 == 0){
					answer++;
				}
				t/=10;
			}
		}
		cout <<answer<<endl;
	}


}