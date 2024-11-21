#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int test;
    cin >> test;
    while (test--)
    {
        long long int n, m, h;
        cin >> n >> m >> h;
        priority_queue<long long int> pq;
        multiset<long long int, greater<long long int>> a, b;
        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            a.insert(x);
        }
        for (long long int i = 0; i < m; i++)
        {
            long long int x;
            cin >> x;
            b.insert(x);
        }
        for (auto val : b)
        {
            pq.push(val * h);
        }
        long long int sum = 0;
        for (auto v : a)
        {
            if (!pq.empty())
            {
                long long int front = pq.top();
                pq.pop();
                if (front > v)
                {
                    sum += v;
                }
                else
                {
                    sum += front;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}