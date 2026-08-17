#include<iostream>
using namespace std;

int main()
{
    int a , b , temp;
    cout << "Enter number 1: "<<endl;
    cin >> a;
    cout << "Enter number 2: "<<endl;
    cin >> b;

    cout << "Before swapping:\na = " << a <<endl ;
    cout << "b = " << b << endl;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping:\na = " << a <<endl ;
    cout << "b = " << b << endl;
    return 0;
}
