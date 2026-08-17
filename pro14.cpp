#include<iostream>
using namespace std;

int main()
{
    int Diameter , Radius , Circumference , Area ;

    cout << "Enter Diameter of Circle: "<<endl;
    cin >> Diameter;

    Radius = Diameter / 2;
    Circumference = 2 * 3.14 * Radius;
    Area = 3.14 * Radius * Radius;

    cout << "Radius of Circle: " << Radius << endl;
    cout << "Circumference of Circle: " << Circumference << endl;
    cout << "Area of Circle: " << Area << endl;

    return 0;
}
