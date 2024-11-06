#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int max = 0;
    for (int i = 0; i < x && i < y; i++)
    {
        max++;
    }
    cout << max << endl;
    return 0;
}