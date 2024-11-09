#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    bool slash = false;

    string result;
    for (auto it : s)
    {
        if (it == '/')
        {
            if (!slash)
            {
                result = result + it;
                slash = true;
            }
        }
        else
        {
            result = result + it;
            slash = false;
        }
    }
    cout << result;

    return 0;
}