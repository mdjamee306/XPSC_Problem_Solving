#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    deque<int> dq, r;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        dq.push_back(num);
    }

    for (auto p : dq)
    {
        if (p != x)
        {
            r.push_back(p);
        }
    }
    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
    return 0;
}