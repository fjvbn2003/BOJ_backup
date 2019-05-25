#include <iostream>
#include <vector>
bool comp(int a, int b){
    return a>b;
}
using namespace std;
int main(){
    vector<int> arr;
    int n,a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end(), comp);
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }

}