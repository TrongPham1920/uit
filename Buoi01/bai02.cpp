#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;

    cout << "Nhập số nguyên a, b: ";
    cin >> a >> b;

    int tong = a + b;
    cout << "Tổng 2 số: " << tong << endl;

    int hieu = a - b;
    cout << "Hiệu 2 số: " << hieu << endl;

    int tich = a * b;
    cout << "Tích 2 số: " << tich << endl;

    int chialaydu = a % b;
    cout << "Chia lấy dư 2 số: " << chialaydu << endl;

    double chialaynguyen = a / b;
    cout << "Chia lấy nguyên 2 số: " << chialaynguyen << endl;

    double chialaynguyenep = double(a) / double(b);
    cout << setprecision(3) << fixed << "Chia lấy nguyên 2 số làm tròn: " << chialaynguyenep << endl;

    return 0;
}