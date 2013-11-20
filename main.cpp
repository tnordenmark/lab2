#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a2 = 0; // Katet a i kvadrat
    int b2 = 0; // Katet b i kvadrat
    int c2 = 0; // Hypotenusa i kvadrat
    int count = 0; // Räknare för antal pytagoreiska trianglar

    for(int i = 1; i <= 500; i++) // Loop för att beräkna hypotenusan
    {
        c2 = i * i; // hypotenusan i kvadrat
        for(int j = 1; j <= 500; j++) // Loop för att beräkna katet b
        {
            b2 = j * j; // Katet b i kvadrat
            for(int k = 1; k < j; k++) // Loop för att beräkna katet a
            {
                a2 = k * k; // Katet a i kvadrat
                if(c2 == a2 + b2)
                {
                    // Om hypotenusan är jämt hundratal, skriv ut information
                    if(i == 100 || i == 200 || i == 300 || i == 400 || i == 500)
                        cout << "Triangel med hypotenusan " << i << ", katet a = " << k << ", katet b = " << j << endl;
                    count++; // Öka på räknaren för antal trianglar med 1 för varje varv
                }
            }
        }
    }

    cout << "\nAntal pytagoreiska trianglar: " << count << endl;

    return 0;
}
