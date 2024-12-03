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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> count(26, 0);
        string s = "";

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (count[j] == a[i])
                {
                    count[j]++;
                    s += char('a' + j);
                    break;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}