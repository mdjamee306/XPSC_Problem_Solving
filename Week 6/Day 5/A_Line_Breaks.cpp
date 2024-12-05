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
        int length = 0;
        int count = 0;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int l = s.length();
            v.push_back(l);
        }

        for (auto val : v)
        {
            if (val + length <= m)
            {
                length += val;
                count++;
            }
            else
                break;
        }
        cout << count << endl;
    }
    return 0;
}
