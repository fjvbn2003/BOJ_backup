#include<stdio.h>
#include<queue>
using namespace std;
void check(int);
int bfs();
queue<int> q;
int N, K;
int isVisited[100001];
int main()
{
    scanf("%d%d", &N, &K);
    printf("%d", bfs());
}
int bfs()
{
    q.push(N);
    int depth = 0;
    while (!q.empty())
    {
        int s = q.size();
        for (int i = 0; i < s; ++i)
        {
            int cur = q.front();
            q.pop();
            if (cur == K)
                return depth;
            check(cur+1);
            check(cur-1);
            check(cur*2);
        }
        ++depth;
    }
}
void check(int to)
{
    if (to >= 0 && to <= 100000 && !isVisited[to])
    {
        isVisited[to] = 1;
        q.push(to);
    }
 
}
