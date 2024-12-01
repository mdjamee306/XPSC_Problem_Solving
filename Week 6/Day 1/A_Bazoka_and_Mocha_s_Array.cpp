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

        vector<int> a(n), b(n), c;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b.begin(), b.end());

        int index = n;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                index = i;
            }
        }

        for (int i = index; i < n; i++)
        {
            c.push_back(a[i]);
        }
        for (int i = 0; i < index; i++)
        {
            c.push_back(a[i]);
        }

        bool isSorted = true;
        for (int i = 0; i < n; i++)
        {
            if (c[i] != b[i])
            {
                cout << "No" << endl;
                isSorted = false;
                break;
            }
        }
        if (isSorted)
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}