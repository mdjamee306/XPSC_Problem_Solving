#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long ll;

map<int, int> get_primeFactors(int n)
{
    map<int, int> factors;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1)
    {
        factors[n]++;
    }
    return factors;
}

map<int, int> get_factorial_primeFactors(int m)
{
    map<int, int> allFactors;
    for (int i = 2; i <= m; ++i)
    {
        map<int, int> factors = get_primeFactors(i);
        for (auto &f : factors)
        {
            allFactors[f.first] += f.second;
        }
    }
    return allFactors;
}

ll count_divi(const map<int, int> &factors)
{
    ll divi = 1;
    for (auto &f : factors)
    {
        divi = (divi * (f.second + 1)) % MOD;
    }
    return divi;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    map<int, int> factorialFactors = get_factorial_primeFactors(M);

    vector<ll> res(N);

    for (int i = 0; i < N; ++i)
    {
        map<int, int> totalFactors = factorialFactors;
        map<int, int> numberFactors = get_primeFactors(A[i]);

        for (auto &f : numberFactors)
        {
            totalFactors[f.first] += f.second;
        }

        res[i] = count_divi(totalFactors);
    }

    for (int i = 0; i < N; ++i)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
