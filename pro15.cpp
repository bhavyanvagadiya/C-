#include<iostream>
using namespace std;

int main()
{
    int Area , Base , Height;

    cout << "Enter Base and Height of Triangle: "<<endl;
    cin >> Base >> Height;

    Area = (Base * Height) / 2;
    cout << "Area of Triangle: " << Area << endl;

    return 0;
}
