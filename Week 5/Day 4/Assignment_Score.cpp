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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int present_sum = 0;
        for (int i = 0; i < n; i++)
        {
            present_sum += a[i];
        }

        int total_assignments = n + 1;
        int pass_mark = total_assignments * 0.5 * 100;
        int rq = pass_mark - present_sum;

        if (rq > 100)
        {
            cout << -1 << endl;
        }
        else if (rq <= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << rq << endl;
        }
    }

    return 0;
}