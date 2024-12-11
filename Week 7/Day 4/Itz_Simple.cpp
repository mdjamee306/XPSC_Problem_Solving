#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        int vedH = 0;
        int varH = p;
        vector<int> v;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mx = max(mx, x);
            v.push_back(x);
        }
        vedH += mx + k;
        for (int val : v)
        {
            varH += val;
        }
        varH -= mx;
        if (vedH > varH)
            cout << "Ved" << endl;
        else if (vedH < varH)
            cout << "Varun" << endl;
        else
            cout << "Equal" << endl;
    }
}