#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    int set1 = 2 * x + 3 * y;
    int set2 = 2 * z + y;
    int find_min = min(set1, set2);
    cout << find_min << endl;
    return 0;
}