#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y = 9;

    for (int i = 1; i <= x; i++)
    {
        for (int i = 1; i <= y; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\nBang cuu chuong\n";

    for (int j = 2; j <= 9; j++)
    {
        for (int x = 1; x <= 10; x++)
        {
            int z = j * x;
            cout << j << " x " << j << "=" << z << endl;
        }
        cout << "\n";
    }

    return 0;
}