#include <iostream>

using namespace std;
int main()
{

    double temperature, dewpoint;
    double height;

    cout << "Enter the temperature: ";

    cin >> temperature;

    cout << "Enter dewpoint: ";

    cin >> dewpoint;

    total = (temperature - dewpoint) / 4.4;

    cout << "The total is" << total << endl;
    return 0;
}
