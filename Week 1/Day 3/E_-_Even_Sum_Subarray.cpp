#include <bits/stdc++.h>
using namespace std;

int sum_array(vector<int> &arr)
{
    int n = arr.size();
    int max_size = 0;
    int present_sum = 0;

    for (int i = 0; i < n; i++)
    {
        present_sum += arr[i];
        if (present_sum % 2 == 0)
        {
            max_size = max(max_size, i + 1);
        }
    }

    return max_size;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int result = sum_array(arr);
        cout << result << endl;
    }

    return 0;
}