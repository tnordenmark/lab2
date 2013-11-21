// lab2_upg2.cpp
// Program för att skriva ut en ASCII-tabell från 32 - 255
// Thomas Nordenmark 2013-11-20
// Ver 0.1
//------------------------------------------------------------------------------
#include <iostream> // cout
#include <iomanip> // setw
using namespace std;

int main()
{
    char ch; // Lagrar tecknet som ska skrivas ut

    cout << left; // Vänsterjustering tills den ändras på nytt

    for (int i = 32; i < 64; i++) // Radloop
    {
        ch = i;
        if (ch != '\n') // Ersätt newline med blankt tecken
            cout << setw(3) << i << " " << setw(6) << ch;
        else
            cout << setw(3) << i << " " << setw(6);

        for (int j = 1; j < 7; j++) // Kolumnloop
        {
            ch += 32;
            if (ch != '\n') // Ersätt newline med blankt tecken
                cout << setw(3) << i + (32 * j) << " " << setw(6) << ch;
            else
                cout << setw(3) << i + (32 * j) << " " << setw(6);
        }

        cout << endl; // Radbrytning
    }

    return 0;
}
