#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10];
bool visit[10];
void BFS(int start)
{
    queue<int>q;
    q.push(start);
    visit[start]=1;
    while(!q.empty())
    {
        int a=q.front();
        cout<<a<<" ";
        for(auto v:adj[a])
        {
            if(!visit[v])
            {
                visit[v]=1;
                q.push(v);

            }
        }
        q.pop();
    }


}
int main()
{

    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[0].push_back(2);
    adj[2].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[3].push_back(4);
    adj[4].push_back(3);



    BFS(0);
}
