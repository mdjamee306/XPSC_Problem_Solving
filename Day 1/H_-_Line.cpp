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
        string s;
        cin >> s;

        int total_score = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                v.push_back((n - 1 - i) - i);
                total_score += i;
            }
            else
            {
                v.push_back(i - (n - 1 - i));
                total_score += n - 1 - i;
            }
        }
        sort(v.rbegin(), v.rend());

        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                total_score += v[i];
            }
            cout << total_score << ' ';
        }
        cout << '\n';
    }

    return 0;
}