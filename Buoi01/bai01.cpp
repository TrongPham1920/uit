#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Nhập 4 số nguyên a, b, c, d: ";
    cin >> a >> b >> c >> d;

    double x = (a + b + c + d) / 4.0;

    cout << "Trung bình 4 số: " << x << endl;

    return 0;
}