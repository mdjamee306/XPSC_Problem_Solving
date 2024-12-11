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
        string s, t;
        cin >> n >> s >> t;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
                count++;
        }
        if (count % 2 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}