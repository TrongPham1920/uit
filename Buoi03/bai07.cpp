#include <iostream>
using namespace std;

int main()
{
    int n;

    do
    {
        cout << "Nhập số trong khoảng 5, 10: ";
        cin >> n;
        if (n < 5 || n > 10)
        {
            cout << "Giá trị không hợp lệ \n";
        }
    } while (n < 5 || n > 10);
    cout << "Giá trị đúng: " << n << endl;

    cout << "Biểu thức \n";

    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        int t = 0;
        for (int x = 1; x <= i; x++)
        {
            t += x;
        }
        s *= t;
    }

    cout << "Giá trị biểu thức: " << n << " là: " << s << endl;

    return 0;
}