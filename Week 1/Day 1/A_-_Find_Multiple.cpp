#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int find_multiple = a;
    while (find_multiple % c != 0)
    {
        find_multiple++;
    }
    if (find_multiple >= a && find_multiple <= b)
        cout << find_multiple << endl;
    else
        cout << -1 << endl;
    return 0;
}