#include <iostream>
using namespace std;

int main()
{
    int A, B, T;
    cin >> A >> B >> T;
    double req_time = T + 0.5;
    int s = req_time / A;
    int total_biscuits = s * B;
    cout << total_biscuits;
    return 0;
}