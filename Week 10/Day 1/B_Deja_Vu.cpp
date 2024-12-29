#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        vector<int> b(q);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < q; i++)
        {
            cin >> b[i];
        }

        vector<int> firstOccurrence(35, 1000000000);
        for (int i = 0; i < q; i++)
        {
            if (firstOccurrence[b[i]] == 1000000000)
            {
                firstOccurrence[b[i]] = i;
            }
        }

        for (int i = 0; i < n; i++)
        {
            int earliestIndex = 1000000000;

            for (int power = 1; power <= 30; power++)
            {
                if (a[i] % (1 << power) == 0)
                {
                    earliestIndex = min(earliestIndex, firstOccurrence[power]);
                }
            }

            while (earliestIndex < q)
            {
                a[i] += (1 << (b[earliestIndex] - 1));
                int bitPosition = b[earliestIndex] - 1;
                int nextIndex = 1000000000;

                while (bitPosition >= 0)
                {
                    if (firstOccurrence[bitPosition] != 1000000000 && firstOccurrence[bitPosition] > earliestIndex)
                    {
                        nextIndex = min(nextIndex, firstOccurrence[bitPosition]);
                    }
                    bitPosition--;
                }

                earliestIndex = nextIndex;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                cout << a[i] << "\n";
            }
            else
            {
                cout << a[i] << " ";
            }
        }
    }

    return 0;
}
