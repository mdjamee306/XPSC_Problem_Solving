#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while (T--) {
        int N, X;
        cin >> N >> X;

        int evenCount = N / 2;
        int oddCount = N - evenCount;

        bool isXEven = (X % 2 == 0);
        
        int result = isXEven ? evenCount : oddCount;

        cout << result - 1 << endl;
    }

    return 0;
}