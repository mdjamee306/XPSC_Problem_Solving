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
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        long long row_one = min(a, m);
        long long row_two = min(b, m);
        long long remaining_seats = (m - row_one) + (m - row_two);
        long long for_c = min(c, remaining_seats);
        cout << row_one + row_two + for_c << endl;
    }
    return 0;
}
