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

        int m = (n * (n - 1)) / 2;
        vector<long long> v(m);

        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector<long long> a(n);
        long long e = 0, x = n;

        for (int i = 0; i < n; i++)
        {
            x--;
            e += x;
            a[i] = v[e - 1];
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
