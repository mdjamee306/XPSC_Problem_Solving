#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int d1 = a[a.size() - 1] - a[2];
        int d2 = a[a.size() - 3] - a[0];
        int d3 = a[a.size() - 2] - a[1];
        cout << min(d1, min(d2, d3)) << endl;
    }
}