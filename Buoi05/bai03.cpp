#include <iostream>
using namespace std;

int tinhUoc(int n, int &tich)
{
    int t = 0;
    tich = 1;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            t += i;
            tich *= i;
        }
    }
    return t;
}

int main()
{

    int n;
    int tich;
    cout << "Nhap so n: ";
    cin >> n;

    int t = tinhUoc(n, tich);

    cout << "Tong n: " << t << endl;
    cout << "Tich n: " << tich << endl;

    return 0;
}