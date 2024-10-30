#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    char not_found;
    bool flag = true;
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (s.find(i) == string::npos)
        {
            flag = false;
            not_found = i;
            break;
        }
    }
    if (flag)
        cout << "None";
    else
        cout << not_found << endl;

    return 0;
}