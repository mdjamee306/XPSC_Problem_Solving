#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int sum = 0;
        for (int i = x; i > x - y; --i)
        {
            sum += pow(2, i);
        }
        for (int i = 1; i <= x - y; i++)
        {
            sum -= pow(2, i);
        }
        cout << sum << endl;
    }
    return 0;
}