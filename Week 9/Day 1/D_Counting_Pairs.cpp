#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        sort(a.begin(), a.end());
        int cnt = 0;

        for (int i = 0; i < n - 1; i++)
        {
            ll lo = sum - y - a[i];
            ll hi = sum - x - a[i];

            int left = lower_bound(a.begin() + i + 1, a.end(), lo) - a.begin();
            int right = upper_bound(a.begin() + i + 1, a.end(), hi) - a.begin();
            cnt += (right - left);
        }
        cout << cnt << endl;
    }
    return 0;
}