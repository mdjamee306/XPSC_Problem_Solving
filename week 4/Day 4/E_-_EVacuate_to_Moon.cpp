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
        int n, m, h;
        cin >> n >> m >> h;
        priority_queue<int> pq;
        multiset<int, greater<int>> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.insert(x);
        }
        for (auto val : b)
        {
            pq.push(val * h);
        }
        int energy = 0;
        for (auto v : a)
        {
            if (!pq.empty())
            {
                int front = pq.top();
                pq.pop();
                if (front > v)
                {
                    energy += v;
                }
                else
                {
                    energy += front;
                }
            }
        }
        cout << energy << endl;
    }
    return 0;
}