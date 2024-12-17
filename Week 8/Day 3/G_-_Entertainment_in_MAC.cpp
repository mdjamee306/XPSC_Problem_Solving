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
        string s;
        cin >> s;
        string ss = s;
        reverse(ss.begin(), ss.end());
        if (s <= ss)
        {
            cout << s << endl;
        }
        else
        {
            cout << ss << s << endl;
        }
    }
    return 0;
}