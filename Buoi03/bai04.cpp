#include <iostream>
using namespace std;

int main()
{
    int x = 2020;
    int y = 3838;

    cout << "Các số chẵn nguyên \n";
    for (int i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    cout << "\n Các số chia hết cho 3,6,9 \n";
    for (int i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            if (i % 3 == 0 && i % 6 == 0 && i % 9 == 0)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}