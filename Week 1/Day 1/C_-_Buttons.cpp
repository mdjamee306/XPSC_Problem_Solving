#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    // cout<<mx;
    int mini = min(a, b);
    int maximum_coins = mx + max((mx - 1), mini);
    cout << maximum_coins << endl;
    return 0;
}