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
        int n, k;
        cin >> n >> k;

        bool flag = false;

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n - i; j++)
            {
                int s = 10 * i + 11 * j + 12 * (n - i - j);
                if (s == k)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}