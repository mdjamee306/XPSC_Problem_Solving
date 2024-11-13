#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        string S, T;
        cin >> S >> T;

        int countA_S = 0, countB_S = 0;
        int countA_T = 0, countB_T = 0;

        for (char c : S) {
            if (c == 'a') countA_S++;
            else countB_S++;
        }

        for (char c : T) {
            if (c == 'a') countA_T++;
            else countB_T++;
        }

        if (countB_S == countB_T && countA_S <= countA_T) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
