#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout << "Enter temperature in fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32.0) * 5.0/9.0;
    cout << celsius << " degrees Fahrenheit is equal to " << fahrenheit << " degrees Celsius." << endl;

    return 0;
}
