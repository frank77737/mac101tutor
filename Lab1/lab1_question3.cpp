#include <iostream>

using namespace std;

int main()
{
    double rateFuelUsage, timeToMin;
    double gallons;

    cout << "Enter the rate of fuel usage (gallons/hour): ";
    cin >> rateFuelUsage;

    cout << "Enter the time (minutes): ";
    cin >> timeToMin;

    gallons = (rateFuelUsage * timeToMin) / 60;

    cout << "The gallons used are: " << gallons << endl;
    return 0;
}
