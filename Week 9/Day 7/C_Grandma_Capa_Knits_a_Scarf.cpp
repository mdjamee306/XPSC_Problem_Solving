#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test, length;
    cin >> test;

    while (test--)
    {
        string inputString;
        cin >> length >> inputString;

        int minimumOperations = length + 1;

        for (char i = 'a'; i <= 'z'; ++i)
        {
            int start = 0, end = length - 1, operations = 0;

            while (start <= end)
            {
                if (inputString[start] == inputString[end])
                {
                    start++;
                    end--;
                }
                else if (inputString[start] == i)
                {
                    operations++;
                    start++;
                }
                else if (inputString[end] == i)
                {
                    operations++;
                    end--;
                }
                else
                {
                    operations = length + 1;
                    break;
                }
            }

            minimumOperations = min(minimumOperations, operations);
        }

        if (minimumOperations == length + 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << minimumOperations << '\n';
        }
    }

    return 0;
}