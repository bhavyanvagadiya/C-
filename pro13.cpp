#include<iostream>
using namespace std;

int main()
{
    int Length , Breadth , Area , Perimeter ;
    cout << "Enter Length and Breadth of Rectangle: "<<endl;
    cin >> Length >> Breadth;

    Area = Length * Breadth ;
    Perimeter = 2 * (Length + Breadth);

    cout << "Area of Rectangle: " << Area << endl;
    cout << "Perimeter of Rectangle: " << Perimeter << endl;

    return 0;
}
