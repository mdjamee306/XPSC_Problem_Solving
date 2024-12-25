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
        int a, b, c;
        cin >> a >> b >> c;
        int res = 2 * (a * b + b * c + c * a);
        int ans = 1000 / res;
        cout << ans << endl;
    }
    return 0;
}