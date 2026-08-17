#include<iostream>
using namespace std;

int main()
{
    int Meter , Kilometer , centimeter;
    
    cout << "Enter the centimeter:" <<endl;
    cin >> centimeter;

    Meter = centimeter / 100;
    Kilometer = centimeter / 1000;

    cout << "Meter :" << Meter <<endl;
    cout << "Kilometer :" << Kilometer;

    return 0 ;
}
