#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhập số nguyên n: ";
    cin >> n;

    int t = 0;
    int mu = 1;

    for (int i = 1; i <= n; i++)
    {
        mu *= i;
        t += pow(2, mu);
    }

    cout << "S(" << n << ") = " << t << endl;

    return 0;
}