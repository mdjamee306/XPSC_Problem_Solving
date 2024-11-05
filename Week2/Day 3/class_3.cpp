#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tuple<string, int, int> t = make_tuple("Jamee", 21, 100);
    cout << get<0>(t) << " " << get<1>(t) << " ";

    return 0;
}