#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        int hr, x, y, s1, s2, mx;
        cin >> hr >> x >> y;
        s1 = hr * x;
        int remain = hr / 2;
        s2 = remain * y + (hr % 2) * x;
        mx = max(s1, s2);
        cout << mx << endl;
    }

    return 0;
}