#include <iostream>
using namespace std;
int in;
void draw(int N){
	if(N==3){
		cout<<"  *  ";
		cout<<" * * ";
		cout<<"*****";
	}
	else{
		N = N/2;
		for(int i=0; i<N; i++){
			cout<<" ";
		}
	}
}

int main(){	
	
}