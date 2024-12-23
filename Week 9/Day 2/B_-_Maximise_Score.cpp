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
        int n;
        cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        vector<int> differences(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            differences[i] = abs(A[i] - A[i + 1]);
        }

        int optimal_score = INT_MAX; // Fixed typo here
        if (n >= 2)
        {
            optimal_score = min(optimal_score, differences[0]);
        }
        if (n >= 2)
        {
            optimal_score = min(optimal_score, differences[n - 2]);
        }
        if (n >= 3)
        {
            for (int i = 1; i < n - 1; i++)
            {
                int max_difference = max(differences[i - 1], differences[i]);
                optimal_score = min(optimal_score, max_difference);
            }
        }
        cout << optimal_score << '\n';
    }

    return 0;
}
