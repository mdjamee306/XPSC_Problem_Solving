#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll total = 0;
        ll y = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            total += x;
            y = y + abs(total);
        }
        cout << y << endl;
    }
    return 0;
}