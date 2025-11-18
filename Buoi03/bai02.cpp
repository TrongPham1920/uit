#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    int s = 0;

    for (int i = 0; i <= n; i++)
    {
        s += i;
    }

    cout << "Tổng các số nguyên n " << n << " : " << s << endl;

    int x = 1;

    for (int y = 1; y <= n; y++)
    {
        x *= y;
    }

    cout << "Giai thừa của số n " << n << " : " << x << endl;

    return 0;
}