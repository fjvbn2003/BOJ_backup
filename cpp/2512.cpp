#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,t;
    long long goal;
    vector<int> arr;
    cin >> n;
    for(int i=0; i< n; i++){
        cin >>t;
        arr.push_back(t);
    }
    cin >> goal;
    sort(arr.begin(), arr.end());
    int left = 0;
    int right  = arr[n-1];
    int mid;
    int result;
    long long s = 0;
    while(left <=right){
        s = 0;
        mid = (left+right)/2;
        //cout <<mid<<endl;
        for(int i=0; i<n; i++){
            s += min(arr[i], mid);
        }
        // 작거나 같을 때 답으로서의 희망이 있다.
        if(s<=goal){
            left = mid+1;
            result = mid;
            
        }
        else{right = mid-1;}
    }
    cout << result<<endl;
}
// 손으로 직접 풀어보고 코드를 작성하자.