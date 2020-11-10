#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b;
	cin>> a>>b;
	int n;
	int m;
	int idx;
	m = b.size();
	while(1){
		bool flag = true;
		idx = 0;
		n = a.size();
		while(1){
			if(idx+m>n) break;
			if(a.substr(idx,m) == b){
				flag = false;
				// if(idx+m >=n){
				// 	a = a.substr(0,idx);
				// 	n = a.size();
				// 	//cout <<"HI"<<endl;
				// 	//cout <<a<<endl;

				// }else{
					a = a.substr(0,idx)+ a.substr(idx+m);
					n = a.size();
					//cout <<"Hello"<<endl;
							//cout <<a<<endl;

				//}
			}else{
				idx+=1;
			}
		}
		if(flag==true) break;
	}
	
	if(a.size() == 0){
		cout<<"FRULA"<<endl;
	}else{
		cout <<a<<endl;
	}
}