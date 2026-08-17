#include<iostream>
using namespace std;
int main()
{
    int p , r , t;
    float si , amount;

    cout << "Enter Principal, Rate and Time:\n";

    cin >> p >> r >> t;
    cout << "Principal: " << p << endl;
    cout << "Rate: " << r << endl;
    cout << "Time: " << t << endl;
    si = (p * r * t) / 100;
    amount = p + si;
    cout << "Simple Interest: " << si << endl;
    cout << "Amount: " << amount << endl;

    return 0;
}
