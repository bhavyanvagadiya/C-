#include<iostream>
using namespace std;

int main()
{
    int p , r , t;
    float CI , amount;

    cout << "Enter Principal, Rate and Time:\n";
    cin >> p >> r >> t;

    cout << "Principal: " << p << endl;
    cout << "Rate: " << r << endl;
    cout << "Time: " << t << endl;

    CI = p(*(1 + r / 100.0)^ t);
    amount = p + CI;

    cout << "Compound Interest: " << CI << endl;
    cout << "Amount: " << amount << endl;

    return 0;
}
