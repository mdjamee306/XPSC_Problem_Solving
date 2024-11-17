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
        int n;
        cin >> n;
        int a[n][n - 1];

        vector<int> count(n + 1, 0);
        vector<int> p(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
                if (j == 0)
                    count[a[i][j]]++;
            }
        }

        for (int i = 0; i <= n; i++)
        {
            if (count[i] == n - 1)
            {
                p[0] = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] != p[0])
            {
                for (int j = 0; j < n - 1; j++)
                {
                    p[j + 1] = a[i][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << p[i] << ' ';
        cout << endl;
    }
    return 0;
}