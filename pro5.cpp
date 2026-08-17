#include <iostream>
using namespace std;

int main() 
{
    int asciiValue;
    cout <<"Enter the number:";
    cin >> asciiValue;

    char character = asciiValue;
    cout << "The character corresponding to ASCII value is "<< character;
    return 0;
}
