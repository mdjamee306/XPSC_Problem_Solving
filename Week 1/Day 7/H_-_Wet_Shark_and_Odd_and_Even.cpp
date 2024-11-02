#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> o, e;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum = sum + x;

        if (x % 2 == 0)
            e.push_back(x);
        else
            o.push_back(x);
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        sort(o.begin(), o.end());
        sum = sum - o[0];
        cout << sum << endl;
    }
    return 0;
}