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
        int a, b, n, s, sum;
        sum = 0;
        cin >> a >> b >> n >> s;

        int d = s / n;
        d = min(d, a);

        int r = s - n * d;

        if (r <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}