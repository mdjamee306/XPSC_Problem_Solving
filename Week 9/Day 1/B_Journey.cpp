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
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll total = a + b + c;
        ll fullCycles = n / total;
        ll remain = n % total;

        ll days = fullCycles * 3;
        if (remain > 0)
        {
            if (remain <= a)
            {
                days++;
            }
            else if (remain <= a + b)
            {
                days += 2;
            }
            else
            {
                days += 3;
            }
        }

        cout << days << endl;
    }

    return 0;
}
