// Example program
#include <iostream>
#include <vector>
using namespace std;
vector<int> tree[51];
int check[51];
int parent[51];
int count;
int root;
void DFS(int a){
    if(tree[a].size() == 0){
        count++;
        //cout <<"count up at : "<<a<<endl;
    }
    for(int i : tree[a]){
            DFS(i);
    }
}

int main()
{
    int n,t;
    cin>> n;
    for(int i=0; i<n; i++){
        cin >> t;
        parent[i] = t;
        if(t==-1){root = i;}
        else{tree[t].push_back(i);}
    }
    // node to delete
    cin >> t;
    if(t==root){cout <<0<<endl; return 0;}

    int p = parent[t];
    for(auto it = tree[p].begin(); it !=tree[p].end(); it++ ){
        if(*it == t){tree[p].erase(it); break;}
    }
    DFS(root);
    cout << count<<endl;
}
