#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        int N;
        cin >> N;
        int weeks = N / 7;
        int remaining_days = N % 7;
        int tuesdays = weeks;
        if (remaining_days >= 2)
        {
            tuesdays++;
        }
        cout << tuesdays << endl;
    }

    return 0;
}