#include <iostream>
#include <cmath>
using namespace std;

bool ktSoChinhPhuong(int n)
{
    if (n < 0)
        return false;
    int x = sqrt(n);
    return x * x == n;
}

bool ktSoNT(int n)
{
    if (n < 2)
        return false;
    if (n % 2 == 0)
        return n == 2;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    int n;
    cout << "Nhập số n: ";
    cin >> n;

    cout << "So " << n << (ktSoChinhPhuong(n) ? "là" : "không") << " số chính phương\n";
    cout << "So " << n << (ktSoNT(n) ? "là" : "không") << " số nguyên tố\n";

    return 0;
}
