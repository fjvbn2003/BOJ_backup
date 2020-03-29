#include <iostream>
using namespace std;

int main(){
	int n;
	cin>> n;
	
	for(int i=0; i<n*2; i++){
		if(i%2 ==0){
			if(n%2==0){
			for(int j=0; j< n/2; j++){
				cout <<"* ";
			}	
			}else{
				for(int j=0; j< n/2+1; j++){
				cout <<"* ";
			}
			}
			
			cout <<"\n";
		}else{
			for(int j=0; j< n/2; j++){
				cout <<" *";
			}
			cout <<"\n";
		}
	}
	
}