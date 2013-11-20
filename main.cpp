#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int counter = 0;
    int count_tri = 0;

    for(int a = 1; a <= 500; a++)
    {
        for(int b = 1; b <= 500; b++)
        {
            counter++;
            c = sqrt((a * a)+(b * b));
            if(c == 100 || c == 200 || c == 300 || c == 400 || c == 500)
                cout << "Triangel med hypotenusan " << c >> ", katet a = " << a << ", katet b = " << b << endl;
            if(((a*a)))
        }
    }

    return 0;
}
