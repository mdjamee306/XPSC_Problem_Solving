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
        int n, k, mx = INT_MAX, flag = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num >= k)
            {
                mx = min(mx, num % k);
                flag = 1;
            }
        }
        if (flag)
        {
            cout << mx << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
