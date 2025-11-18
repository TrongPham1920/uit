#include <iostream>
using namespace std;

int main()
{
    int n;
    bool snt = true;

    cout << "Nhập số n: ";
    cin >> n;

    if (n < 2)
    {
        cout << n << " không phải số nguyên tố" << endl;
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            snt = false;
            break;
        }
    }

    if (snt)
        cout << n << " là số nguyên tố" << endl;
    else
        cout << n << " không phải số nguyên tố" << endl;

    return 0;
}