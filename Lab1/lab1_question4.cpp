#include <iostream>

using namespace std;

int main()
{
    double fahrenheit, celsius;

    // Fahrenheit to Celsius conversion
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "The temperature in Celsius is: " << celsius << endl;

    // Celsius to Fahrenheit conversion
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;

    return 0;
}
