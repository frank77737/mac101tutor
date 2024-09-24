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

    height = (temperature - dewpoint) / 4.4;

    cout << "The height is: " << height << endl;
    return 0;
}
