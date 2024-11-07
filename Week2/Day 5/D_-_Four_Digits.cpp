#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a[4];
    memset(a, 0, sizeof(a));
    int j = s.length() - 1;
    for (int i = 3; i >= 0 && j >= 0; i--, j--)
    {
        a[i] = s[j] - '0';
    }
    for (auto c : a)
    {
        cout << c;
    }
}