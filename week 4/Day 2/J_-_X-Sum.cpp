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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int current_sum = 0;
                int ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    current_sum += a[ci][cj];
                    ci--;
                    cj--;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    current_sum += a[ci][cj];
                    ci++;
                    cj--;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    current_sum += a[ci][cj];
                    ci--;
                    cj++;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    current_sum += a[ci][cj];
                    ci++;
                    cj++;
                }
                current_sum -= a[i][j] * 3;
                mx = max(mx, current_sum);
            }
        }
        cout << mx << endl;
    }
    return 0;
}