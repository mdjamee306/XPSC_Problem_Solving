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

        vector<int> v1(n);
        for (int i = 1; i <= n; i++)
        {
            cin >> v1[i];
        }

        int sad = 0;
        for (int i = 0; i < m; i++)
        {
            int found;
            cin >> found;

            if (v1[found] == 0)
            {
                sad++;
            }
            else
            {
                v1[found]--;
            }
        }

        cout << sad << endl;
    }

    return 0;
}