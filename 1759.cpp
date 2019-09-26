#include <iostream>
#include <algorithm>
using namespace std;
// 계획: 1759를 combination으로 배열한 뒤에, 검사하기
// 최소 한 개의 모음과 두 개의 자음으로 구성되어 있는지.
//      모음의 개수를 세는 방법
// int vowelcount (char[],int,int) 
// {
// int vow_cnt=0;
// for(int i=0;i<strlen[];i++)
// {
// if(name[i] == 'a' || name[i] == 'e'||name[i] == 'i'||name[i] == 'o'||name[i] == 'u')
// {
// vow_cnt++;
// return vow+cnt;
// }
int l,c;
char arr[15];
char ans[15];
int memo[15];
// 오름 차순으로 되어있는지, 자음 2개이상 모음 한 개가 있는지.
bool check(){
    int v = 0;
    int c = 0;
    for(int i=0; i<l; i++){
        if(ans[i] == 'a' || ans[i] == 'e'||ans[i] == 'i'||ans[i] == 'o'||ans[i] == 'u'){
            v++;
        }else{
            c++;
        }
    }
    if(v>=1 && c>=2){
        return true;
    }else{
        return false;
    }

}
// cur은 지금까지 몇 개 담았는지, goal은 몇 개나 담아야 하는지.
void combi(int cur, int goal){


    if(goal == cur){
        if(check()){
            for(int i=0; i<l; i++){
                cout << ans[i];
            }
            cout << endl;            
        }
    }
    for(int i=0; i<c; i++){
        if(memo[i]==0){
            if(cur>0){
                if(arr[i] <ans[cur-1]){continue;}
            }

            ans[cur] = arr[i];
            memo[i] = 1;
            combi(cur+1, goal);
            memo[i] = 0;
        }
    }

}

int main(){
    cin >> l>> c;
    for(int i=0; i<c; i++){
        cin>> arr[i];
    }
    sort(arr, arr+c);
    combi(0,l);
}