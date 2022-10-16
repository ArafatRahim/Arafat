#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x, y, a, cnt = 0;
    int i, j;
    cin >> x;
    cin >> y;
    for (i = 0; i < x; i++)
    {
        cin >> a;
        if (a > y)
            cnt += 2;
        else if (a == y)
            cnt++;
        else
            cnt++;
    }
    cout << cnt;
}
