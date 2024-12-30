#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if (n >= 7 || n == 3 || n == 4 || n == 6)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}