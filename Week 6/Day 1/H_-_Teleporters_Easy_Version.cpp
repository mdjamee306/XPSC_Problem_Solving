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
        {
            int n, c;
            cin >> n >> c;

            vector<int> arr(n);
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
                arr[i] += (i + 1);
            }

            sort(arr.begin(), arr.end());

            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (c >= arr[i])
                {
                    c -= arr[i];
                    count++;
                }
                else
                {
                    break;
                }
            }

            cout << count << endl;
        }
    }
    return 0;
}
