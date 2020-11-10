#include <iostream>
#include <algorithm>
using namespace std;
// 9명 중에 2명을 고르는데 그 값이 9명의 총합 -100 이 되는 경우를 찾으면 된다.
// 그리고 그 두명을 찾으면 나머지 난쟁이 7명의 키를 나열하면 된다.



int main(){
    int arr[9];
    int sum = 0;
    for(int i=0; i<9; i++){
        cin>> arr[i];
        sum+= arr[i];
    }
    sort(arr, arr+9);
    sum-=100;
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if((arr[i] + arr[j]) == sum){
                for(int k=0; k<9; k++){
                    if(k==i || k==j){continue;}
                    cout << arr[k]<<" ";
                }
                cout <<endl; return 0;
            }
        }
    }

}