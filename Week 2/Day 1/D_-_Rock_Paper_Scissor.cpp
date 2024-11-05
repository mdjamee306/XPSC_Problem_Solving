#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string A, B;
        cin >> A >> B;

        int chef = 0, chefina = 0;

        for (int i = 0; i < n; i++)
        {
            if (A[i] == 'R' && B[i] == 'S')
            {
                chef++;
            }
            else if (A[i] == 'S' && B[i] == 'P')
            {
                chef++;
            }
            else if (A[i] == 'P' && B[i] == 'R')
            {
                chef++;
            }
            else if (B[i] == 'R' && A[i] == 'S')
            {
                chefina++;
            }
            else if (B[i] == 'S' && A[i] == 'P')
            {
                chefina++;
            }
            else if (B[i] == 'P' && A[i] == 'R')
            {
                chefina++;
            }
        }

        int result;
        if (chef > chefina)
        {
            result = 0;
        }
        else
        {
            result = chefina - chef;
        }
        cout << result << endl;
    }

    return 0;
}
