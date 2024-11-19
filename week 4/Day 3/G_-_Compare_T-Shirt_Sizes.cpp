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
        string a, b;
        cin >> a >> b;

        int lengthA = a.size(), lengthB = b.size();
        char lastCharA = a[a.size() - 1], lastCharB = b[b.size() - 1];

        if (lastCharA != lastCharB)
        {
            if (lastCharA > lastCharB)
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
        else
        {
            if (lengthA == lengthB)
                cout << "=" << endl;
            else if (lastCharA == 'S' && lastCharB == 'S')
            {
                if (lengthA > lengthB)
                    cout << "<" << endl;
                else
                    cout << ">" << endl;
            }
            else if (lastCharA == 'L' && lastCharB == 'L')
            {
                if (lengthA < lengthB)
                    cout << "<" << endl;
                else
                    cout << ">" << endl;
            }
        }
    }

    return 0;
}
