#include <bits/stdc++.h>
using namespace std;

int get_in(int f, int x, int y)
{
    return (f + (y - x) + 10) % 10;
}

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
        vector<int> fn(n);
        for (int i = 0; i < n; i++)
            cin >> fn[i];

        vector<int> in(n);
        for (int i = 0; i < n; i++)
        {
            int m;
            string ss;
            cin >> m >> ss;
            int x = 0, y = 0;
            for (char s : ss)
            {
                if (s == 'D')
                    y++;
                else if (s == 'U')
                    x++;
            }

            in[i] = get_in(fn[i], x, y);
        }
        for (int i = 0; i < n; i++)
        {
            cout << in[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
