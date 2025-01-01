#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        vector<ll> num(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        ll firstNum = num[0];
        sort(num.begin(), num.end());
        auto pos = find(num.begin(), num.end(), firstNum);
        ll low = 1, high = 1e6;
        ll index = pos - num.begin();
        if (index > 0)
        {
            ll left = num[index - 1];
            low = max(low, (firstNum + left + 1) / 2);
        }
        if (index < n - 1)
        {
            ll right = num[index + 1];
            high = min(high, (firstNum + right) / 2);
        }
        ll result = max(0LL, high - low + 1);
        cout << result << endl;
    }
    return 0;
}