#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10];
bool visit[10];
void BFS(int start)
{
    queue<int>q;
    q.push(start);
    int visit[start]=1;
    while(!q.empty())
    {
        int u=q.front();
        cout<<u<<" ";
        for(int v;adj[v])
        {
            if(!visit[v])
            {
                adj[v]=1
                q.push(v);
            }
        }
        q.pop();
    }
}
int main()
{
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[1].push_back(4);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(6);
    adj[4].push_back(2);
    adj[4].push_back(5);
    adj[5].push_back(2);
    adj[5].push_back(6);
    adj[5].push_back(7);
    adj[6].push_back(2);
    adj[7].push_back(8);
    adj[7].push_back(6);
    adj[8].push_back(5);
    adj[8].push_back(4);
}
