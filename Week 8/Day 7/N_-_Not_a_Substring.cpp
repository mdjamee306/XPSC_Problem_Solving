#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (s == "()")
        {
            cout << "No" << endl;
            continue;
        }
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s.substr(i, 2) == ")(")
            {
                flag = true;
                break;
            }
        }
        string res = "";
        if (flag)
        {
            for (int i = 0; i < n; i++)
            {
                res += '(';
            }
            for (int i = 0; i < n; i++)
            {
                res += ')';
            }
            cout << "Yes" << endl;
            cout << res << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                res += "()";
            }
            cout << "Yes" << endl;
            cout << res << endl;
        }
    }
    return 0;
}