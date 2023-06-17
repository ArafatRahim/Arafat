#include<bits/stdc++.h>
using namespace std;

vector<int>adj[8];
bool visit[8];
void BFS(int start)
{
      queue<int>q;
      q.push(start);
      while(!q.empty())
      {
         int u=q.front();
         cout<<q.front()<<" ";
         for(auto v:adj[u])
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
    int A=0,B=1,C=2,F=3,G=4,E=5,D=6,J=7,K=8;
    //According to the figure Example:8.7//
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
    BFS(0);

}
