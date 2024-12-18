#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll total_cost = 0;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll i = 0;
        for (auto val : v)
        {
            if (val - i >= 0)
            {
                total_cost += val - i;
            }
            i++;
        }
        cout << total_cost << endl;
    }
    return 0;
}