#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


struct member{
    string n;
    int age;
    int i;
};

bool comp(const member & a,const member & b ){
    if(a.age == b.age){return a.i<b.i;}
    else{
        return a.age < b.age;
    }
}

int main(){
    vector<member> arr;
    int n, age;
    string s;
    cin>> n;
    member m;
    for(int i=0; i< n; i++){
        cin>> age>> s;
        m.age = age; m.n = s; m.i = i;
        arr.push_back(m);
    }
    stable_sort(arr.begin(), arr.end(), comp);
    for(int i=0; i< n; i++){
        cout << arr[i].age<<" "<<arr[i].n<<"\n";
    }
}