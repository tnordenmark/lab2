// lab2_upg3.cpp
// Program för att kontrollera om ett femsiffrigt tal är ett palindrom
// Thomas Nordenmark 2013-11-21
// Ver 0.1
//------------------------------------------------------------------------------
#include <iostream> // cout, cin
using namespace std;

int main()
{
    char choice; // Char för att lagra valet för att köra programmet igen eller ej

    // Huvudloop för att kunna köra programmet flera gånger
    do
    {
        int palindrome = 0; // Lagra siffrorna som ska kontrolleras
        int reverse = 0; // Lagra det omvända talet att jämföra med
        int num = 0; // Temporär variabel för beräkningsresultat

        // Loop för att kontrollera att talet är 5 siffror
        do
        {
            cout << "Mata in ett femsiffrigt nummer: ";
            cin >> palindrome;
        }while(palindrome < 9999 || palindrome > 100000);

        int key = palindrome; // Söknyckel

        // Loop för att vända på det eventuella palindromet
        for(int i = 1; palindrome != 0; i++)
        {
            num = palindrome % 10;
            palindrome = palindrome / 10;
            reverse = num + (reverse * 10);
        }

        // Jämför det omvända talet med originaltalet, om samma = palindrom
        if(reverse == key)
        {
            cout << key << " är ett palindrom." << endl << endl;
        }
        // Om inte samma = inget palindrom
        else
        {
            cout << key << " är INTE ett palindrom." << endl << endl;
        }

        // Kontrollera så att endast j/J eller n/N matas in
        do
        {
            cout << "Kör programmet en gång till (j/n)?: ";
            cin >> choice;
            choice = toupper(choice); // Konvertera valet till en versal för enklare villkorshantering
        }while(!(choice == 'J' || choice == 'N'));

    }while(choice == 'J'); // Om valet är J kör programmet igen

    return 0;
}
