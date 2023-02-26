#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double celsiusToFahrenheit(double celsius)
{
    return (9.0 / 5 ) * celsius + 32;
}


double fahrenheitToCelsius(double fahrenheit)
{
    return (5.0 / 9) * (fahrenheit - 32);
}

int main()
{
    cout << setw(12) << "Celsius" << setw(12) << "Fahrenheit" << setw(12) << "|" << setw(12) << "Fahrenheit"
        << setw(12) << "Celsius" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    double celsius = 40.0; double fahrenheit = 120.0;
    for (int i = 1; i <= 10; celsius--, fahrenheit -= 10, i++)
    {
       
       
        cout << fixed << setprecision(1) << showpoint << setw(12) << celsius << fixed << setprecision(1) << showpoint << setw(12) << celsiusToFahrenheit(celsius) << fixed << setprecision(1) << showpoint << setw(12) <<
            "|" << setw(12) << fahrenheit << fixed << setprecision(2) << showpoint << setw(12) << fahrenheitToCelsius(fahrenheit) << fixed << setprecision(2) << showpoint << endl;
    }

    return 0;
}
