#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    int r = y * z;
    if (x < r)
    {
        cout << -1 << endl;
    }
    else
    {
        int sum = x - r;
        cout << sum << endl;
    }
    return 0;
}