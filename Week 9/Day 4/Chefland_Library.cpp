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
        map<int, int> mp;
        for (int i = 1; i <= n; i++) 
        {
            int x;
            cin >> x;
            mp[x] = max(mp[x], i);
        }
        int total = 0;
        for (auto t : mp) 
        {
            total += t.second;
        }
        cout << total << endl;
    }

    return 0;
}