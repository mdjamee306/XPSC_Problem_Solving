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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0, flag = 0;
        while (r < n)
        {
            if (s[r] == 'B')
            {
                flag++;
                r += k;
            }
            else
                r++;
        }
        cout << flag << endl;
    }
    return 0;
}