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

        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<int> a(n);
        a[0] = b[0] / 2;
        a[1] = b[0] - a[0];

        for (int i = 1; i < n - 1; i++)
        {
            a[i + 1] = b[i] - a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
