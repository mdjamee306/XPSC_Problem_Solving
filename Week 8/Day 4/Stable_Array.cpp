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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int mx = 0;
        vector<int> w(n, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] >= mx)
                w[i] = 0;
            else
                w[i] = w[i + 1] + 1;
            mx = max(v[i], mx);
        }
        int ans = *max_element(w.begin(), w.end());
        cout << ans << endl;
    }
    return 0;
}