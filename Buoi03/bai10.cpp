#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    double userScore = 0, machineScore = 0;
    int round = 1;

    while (abs(userScore - machineScore) < 2)
    {
        char user;
        cout << "Lan " << round << " - Nhap K (Keo), G (Gieng), B (Bao): ";
        cin >> user;

        if (user != 'K' && user != 'G' && user != 'B')
        {
            cout << "Nhap khong hop le, thu lai.\n";
            continue;
        }

        char machine;
        int r = rand() % 3;
        if (r == 0)
            machine = 'K';
        else if (r == 1)
            machine = 'G';
        else
            machine = 'B';

        cout << "May chon: " << machine << endl;

        if (user == machine)
        {
            cout << "=> Hoa\n";
            userScore += 0.5;
            machineScore += 0.5;
        }
        else if ((user == 'K' && machine == 'B') ||
                 (user == 'G' && machine == 'K') ||
                 (user == 'B' && machine == 'G'))
        {
            cout << "=> Nguoi thang\n";
            userScore += 1;
        }
        else
        {
            cout << "=> May thang\n";
            machineScore += 1;
        }

        cout << "Diem nguoi: " << userScore << " | Diem may: " << machineScore << "\n\n";
        round++;
    }

    cout << "Tro choi ket thuc!\n";
    if (userScore > machineScore)
        cout << "Nguoi thang chung cuoc!\n";
    else
        cout << "May thang chung cuoc!\n";

    return 0;
}
