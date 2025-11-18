#include <iostream>
using namespace std;

int main()
{
    cout << "Bộ nghiệm: 2x + 7y + 9z = 979 với (x, y, z > 0) \n";

    int a = 0;
    int mSum = 0;
    int mX = 0, mY = 0, mZ = 0;

    for (int x = 1; x <= 979 / 2; x++)
    {
        for (int y = 1; y <= 979 / 7; y++)
        {
            int b = 979 - 2 * x - 7 * y;
            if (b > 0 && b % 9 == 0)
            {
                int z = b / 9;
                if (z > 0)
                {
                    // cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
                    a++;

                    int s = x + y + z;
                    if (s > mSum)
                    {
                        mSum = s;
                        mX = x;
                        mY = y;
                        mZ = z;
                    }
                }
            }
        }
    }

    cout << "Tổng số nghiệm: " << a << endl;
    cout << "Nghiệm có x + y + z lớn nhất:\n";
    cout << "x = " << mX << ", y = " << mY << ", z = " << mZ << endl;
    cout << "Tổng x + y + z = " << mSum << endl;

    return 0;
}