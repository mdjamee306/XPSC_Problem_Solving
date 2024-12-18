#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int mn = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int peri = 2 * (i + j);
                int sub = abs(k - peri);
                mn = min(mn, sub);
            }
        }
        cout << mn << endl;
    }
}