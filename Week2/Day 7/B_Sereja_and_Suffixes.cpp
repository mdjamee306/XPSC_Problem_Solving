#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n), count(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    set<int> s;

    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        count[i] = s.size();
    }

    for (int i = 0; i < m; i++)
    {
        int position;
        cin >> position;
        cout << count[position - 1] << endl;
    }

    return 0;
}