#include <iostream>
#include <string>
using namespace std;

int main(){
    char line[101];
    while(cin.getline(line,101)){
        int i=0;
        int s_c,b_c,n,s;
        s_c = b_c = n = s = 0;
        while(1){
            if(line[i]=='\0'){break;}
            if(line[i]<=' '){s++;}
            else if(line[i]<='9'){n++;}
            else if(line[i]<='Z'){b_c++;}
            else{s_c++;}
            i++;    
        }
        cout <<s_c<<" "<<b_c<<" "<<n<<" "<<s<<endl;
    }
    cin.ignore();
    
}