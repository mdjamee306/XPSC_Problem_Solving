#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    int work[] = {1, 2, 4};
    int count = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (x >= work[i])
        {
            x -= work[i];
            count++;
        }
        else
            break;
    }
    cout << count << endl;
    return 0;
}