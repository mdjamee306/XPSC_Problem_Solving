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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> v;
        v.push_back(a[n - 1]);

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > b[i + 1])
            {
                v.push_back(a[i] - b[i + 1]);
            }
        }

        long long int total = 0;
        for (auto val : v)
        {
            total = total + val;
        }

        cout << total << endl;
    }
    return 0;
}
