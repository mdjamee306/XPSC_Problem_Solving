#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    int result = x - y;
    if (result >= 18)
        cout << "RCB" << endl;
    else
        cout << "CSK" << endl;
    return 0;
}