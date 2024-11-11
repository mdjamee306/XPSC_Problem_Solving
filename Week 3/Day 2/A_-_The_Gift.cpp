#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    int result = x + z;
    if (result >= y)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}