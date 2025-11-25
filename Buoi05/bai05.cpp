#include <iostream>
#include <cmath>
using namespace std;

char tg(float a, float b, float c)
{
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Khong phai hinh tam giac" << endl;
        return 'x';
    }

    bool can = (a == b) || (a == c) | (b == c);
    bool deu = (a == b) & (b == c);

    float maxC = max(a, max(b, c));
    float sumBc = a * a + b * b + c * c - maxC * maxC;

    bool vuong = fabs(maxC * maxC - sumBc) < 1e-6;

    if (deu)
        return 'd';
    if (vuong && can)
        return 'g';
    if (vuong)
        return 'v';
    if (can)
        return 'c';
    return 't';
}

int main()
{
    float a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    char loai = tg(a, b, c);

    switch (loai)
    {
    case 'd':
        cout << "Tam giac deu";
        break;
    case 'g':
        cout << "Tam giac vuong can";
        break;
    case 'v':
        cout << "Tam giac vuong";
        break;
    case 'c':
        cout << "Tam giac can";
        break;
    case 't':
        cout << "Tam giac thuong";
        break;
    case 'x':
        cout << "khong phai tam giac";
        break;
    default:
        break;
    }

    cout << endl;

    return 0;
}