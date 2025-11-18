#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Nhập số a và b: ";
    cin >> a >> b;

    int min = (a < b) ? a : b;

    int ucln = 1;
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ucln = i;
        }
    }

    cout << "Ước chung lớn nhất: " << ucln << endl;

    int n;
    cout << "Nhập số nguyên n: ";
    cin >> n;

    cout << "Các chữ số của n là: ";
    int mang[20];
    int i = 0;

    while (n > 0)
    {

        mang[i] = n % 10;
        n = n / 10;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << mang[j] << " ";
    }

    cout << endl;

    return 0;
}