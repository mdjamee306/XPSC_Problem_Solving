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
        int n, m;
        cin >> n >> m;
        if (n >= m && (n % 2) == (m % 2))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}