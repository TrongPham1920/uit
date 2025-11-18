#include <iostream>
using namespace std;

int main()
{
    int n;
    double x;

    do
    {
        cout << "Nhập số từ -99 đến 99: ";
        cin >> n;

        if (n < -99 || n > 99)
        {
            cout << "Giá trị k hợp lệ \n";
        }
    } while (n < -99 || n > 99);
    cout << "Nhập đúng: " << n << endl;

    int soThuc;
    do
    {
        cout << "Nhập số thực từ -89.9 đến 88.8: ";
        scanf("%lf", &x);

        if (x < -89.9 || x > 88.8)
        {
            cout << "Giá trị k hợp lệ \n";
        }
    } while (x < -89.9 || x > 88.8);
    cout << "Nhập đúng: " << x << endl;

    return 0;
}