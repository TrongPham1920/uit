#include <iostream>
#include <cmath>
using namespace std;

bool ktSnt(int n)
{
    if (n < 2)
        return false;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool ktScp(int n)
{
    if (n < 0)
        return false;
    int x = sqrt(n);
    return x * x == n;
}

int tongSnt(int n)
{
    int t = 0;
    for (int i = 2; i < n; i++)
    {
        if (ktSnt(i))
            t += i;
    }

    return t;
}

int tongScp(int n)
{
    int t = 0;
    for (int i = 1; i * i < n; i++)
    {
        t += i * i;
    }
    return t;
}

int main()
{

    int n;
    cout << "Nhập số n: ";
    cin >> n;

    cout << "Tổng số nguyên tố n: " << n << " là " << tongSnt(n) << endl;

    cout << "\nTổng số chính phương n: " << n << " là " << tongScp(n) << endl;

    return 0;
}