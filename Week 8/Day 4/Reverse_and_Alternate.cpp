#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool isAlternating = true;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                isAlternating = false;
                break;
            }
        }

        if (isAlternating) {
            cout << "Yes" << endl;
            continue;
        }

        int left = -1, right = -1;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                left = i;
                break;
            }
        }

        if (left == -1) {
            cout << "Yes" << endl;
            continue;
        }

        for (int i = n - 1; i > 0; --i) {
            if (s[i] == s[i - 1]) {
                right = i;
                break;
            }
        }

        string reversed = s;
        reverse(reversed.begin() + left, reversed.begin() + right + 1);

        bool isNewAlternating = true;
        for (int i = 0; i < n - 1; ++i) {
            if (reversed[i] == reversed[i + 1]) {
                isNewAlternating = false;
                break;
            }
        }

        if (isNewAlternating) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}