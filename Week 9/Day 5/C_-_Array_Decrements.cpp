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
        vector<int> arr(n), brr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            arr[i] -= brr[i];
            mx = max(mx, arr[i]);
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (mx != arr[i] && brr[i] != 0)
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}