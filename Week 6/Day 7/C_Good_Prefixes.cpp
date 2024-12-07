#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long sum = 0;
        int mx = 0, r = 0;
        ;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            mx = max(mx, arr[i]);
            if (sum - mx == mx)
                r++;
        }
        cout << r << endl;
    }

    return 0;
}