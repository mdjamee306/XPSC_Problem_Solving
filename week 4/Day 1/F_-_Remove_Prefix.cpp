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
        reverse(a.begin(), a.end());
        set<int> s;
        int i = 0;
        while (i < n)
        {
            if (s.find(a[i]) == s.end())
            {
                s.insert(a[i]);
                i++;
            }
            else
            {
                break;
            }
        }
        int result = n - s.size();
        cout << result << endl;
    }
}