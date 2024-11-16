#include <bits/stdc++.h>
using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    deque<string> ss;
    set<string> st;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (st.find(s) != st.end())
        {
            for (auto it = ss.begin(); it != ss.end(); it++)
            {
                if (*it == s)
                {
                    ss.erase(it);
                    break;
                }
            }
        }
        ss.push_front(s);
        st.insert(s);
    }
    for (auto s : ss)
    {
        cout << s.substr(s.size() - 2);
    }

    return 0;
}