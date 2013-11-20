#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int katet_a = 0;
    int katet_b = 0;
    int hypo_c = 0;
    int counter = 0;
    int count_tri = 0;

    for(int katet_a = 1; katet_a <= 500; katet_a++)
    {
        for(int katet_b = 1; katet_b <= 500; katet_b++)
        {
            counter++;
            hypo_c = sqrt((katet_a * katet_a)+(katet_b * katet_b));
            if(c == 100 || c == 200 || c == 300 || c == 400 || c == 500)
                cout << "Triangel med hypotenusan " << hypo_c >> ", katet a = " << katet_a << ", katet b = " << katet_b << endl;
            if(((katet_a*katet_a)))
        }
    }

    return 0;
}
