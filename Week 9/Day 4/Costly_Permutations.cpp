#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> getCycles(const vector<int> &P)
{
    int n = P.size();
    vector<bool> vis(n, false);
    vector<int> cycles;

    for (int i = 0; i < n; ++i)
    {
        if (!vis[i])
        {
            int len = 0, cur = i;
            while (!vis[cur])
            {
                vis[cur] = true;
                cur = P[cur] - 1;
                ++len;
            }
            cycles.push_back(len);
        }
    }

    return cycles;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--)
    {
        int n;
        cin >> n;
        vector<int> P(n);
        for (int i = 0; i < n; i++)
        {
            cin >> P[i];
        }
        vector<int> cycles = getCycles(P);
        priority_queue<int, vector<int>, greater<int>> pq(cycles.begin(), cycles.end());
        ll cost = 0;
        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            int merged = a + b;
            cost += merged;
            pq.push(merged);
        }
        cout << cost << '\n';
    }

    return 0;
}