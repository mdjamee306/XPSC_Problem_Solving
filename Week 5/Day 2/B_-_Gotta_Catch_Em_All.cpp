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
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int mini = 0;
        for (int i = 0; i < n; i++)
        {
            mini += min(v[i] * x, y);
        }

        cout << mini << endl;
    }

    return 0;
}
