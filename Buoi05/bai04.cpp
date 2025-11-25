#include <iostream>
using namespace std;

float hcn(float a, float b, float &dt)
{
    dt = a * b;
    float cv = (a + b) * 2;
    return cv;
}

void veHcn(float a, float b)
{
    int d = (int)a;
    int r = (int)b;

    for (int i = 0; i < r; i++)
    {
        for (int y = 0; y < d; y++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    float a, b;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;

    float dt;
    float cv = hcn(a, b, dt);

    cout << "Dien tich: " << dt << endl;
    cout << "Chu vi: " << cv << endl;

    veHcn(a, b);

    return 0;
}