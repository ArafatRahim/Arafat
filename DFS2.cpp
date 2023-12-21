#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10];
bool visit[10];
void DFS(int start)
{
    cout<<start<<" ";
    visit[start]=1;
    for(auto i:adj[start])
    {
        if(!visit[i])
        {
            DFS(i);
        }
    }
}
int main()
{
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(5);
    adj[3].push_back(6);
    adj[4].push_back(7);
    adj[4].push_back(5);
    adj[5].push_back(2);

    DFS(0);
}
