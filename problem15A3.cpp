#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, edges;
    cin >> n >> edges;
    vector<int> adjLst[n + 1];
    for(int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;
        adjLst[x].push_back(y);
    }
    for(int i = 1; i <= n; i++)
    {
        cout << i << " ";
        for(int j = 0; j < adjLst[i].size(); j++)
        {
            cout << adjLst[i][j] << ", ";
        }
        cout << endl;
    }
}
