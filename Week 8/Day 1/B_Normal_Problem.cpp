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
        string a, b;
        cin >> a;
        reverse(a.begin(), a.end());
        for (char c : a)
        {
            if (c == 'p')
                b += 'q';
            else if (c == 'q')
                b += 'p';
            else
                b += 'w';
        }
        cout << b << endl;
    }
    return 0;
}