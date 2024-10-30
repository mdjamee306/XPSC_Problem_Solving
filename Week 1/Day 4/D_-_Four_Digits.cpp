#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[4] = {0};
    int j = s.length() - 1;
    for (int i = 3; i >= 0 && j >= 0; i--, j--)
    {
        arr[i] = s[j] - '0';
    }
    for (int c : arr)
        cout << c;
    return 0;
}