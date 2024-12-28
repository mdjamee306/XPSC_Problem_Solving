#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long int n;
    cin >> n;
    
    string s = "abba";
    
    if (n == 2)
    {
        cout << "aa" << endl;
    }
    else if (n == 3)
    {
        cout << "abb" << endl;
    }
    else if (n == 4)
    {
        cout << "abba" << endl;
    }
    else
    {
        int tms = n / 4;
        int rem = n % 4;
        
        while (tms--)
        {
            cout << s;
        }
        
        for (int i = 0; i < rem; i++)
        {
            cout << s[i];
        }
    }
    
    cout << endl;
    return 0;
}
